#include "ArrayDinamicoPunteros.h"
#include <iostream>
#include "stdio.h"
#include "string"

using namespace std;

ArrayDinamicoPunteros::ArrayDinamicoPunteros()
{
	cout << "cuantos libros necesita ingresar" << endl;

	getline(cin, entrada);//se asigna el valor ingresado

	tamanio = stoi(entrada);//la entrada se trasforma en entero para determinar cantidad de libros
	
	GuardarTitulosYAutoresDeLibros(tamanio);

	/*cout << endl;

	VerificarLibrosYAutores();*/
}

void ArrayDinamicoPunteros::GuardarTitulosYAutoresDeLibros(int cantidadDeLibros)
{
	titulos = new string[cantidadDeLibros];//arreglo dinamico con punteros
	autores = new string[cantidadDeLibros];//arreglo dinamico con punteros

	cout << "por favor ingresa la siguiente información de los libros" << endl;

	for (int i = 0; i < cantidadDeLibros; i++)
	{
		cout << "\n******* Libro " << i + 1 << "********:\n";
		cout << "Titulo: ";
		//cin >> titulos[i]; //No funciona con espacios
		getline(cin, titulos[i]);
		cout << "Autor: ";
		//cin >> autores[i]; //No funciona con espacios
		getline(cin, autores[i]);
	}

	//liberamos la memoria de ambos punteros
	delete[] titulos;
	delete[] autores;

	/*titulos = NULL;
	autores = NULL;*/
}

void ArrayDinamicoPunteros::VerificarLibrosYAutores()
{
	//for (int i = 0; i < tamanio; i++)
	//{
	//	cout << "\n******* Libro " << i + 1 << "********:\n";
	//	string tmp_string(titulos[i]);
	//	cout << "El Titulo es : " << tmp_string;
	//	//cin >> titulos[i]; //No funciona con espacios
	//	string tmp_string(autores[i]);
	//	cout << "El Autor es: " << tmp_string;
	//	//cin >> autores[i]; //No funciona con espacios
	//}
}
