// AplicacionDeConsolaCPPVisualStudio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void MenuInicial();//declaro la funcion
void Registrar();//declaro la funcion
void Listar();
void Eliminar();


const int cantidadDeArticulos = 1;              //numero de filas

const int cantidadDeItems = 3;                             //numero de columnas

string  datosDeComputadora [cantidadDeArticulos][cantidadDeItems];



int main()
{
    std::cout << "Hello World!\n";
	
	while (true)
	{
		MenuInicial();
	}
}

void MenuInicial()//implemento la función
{
	cout << "Por favor ingrese el numero correcto para la acción a ejecutar \n";
	cout << "1 - Registrar \n";
	cout << "2 - Listar \n";
	cout << "3 - Eliminar \n";

	int OpcionIngresada;

	cin >> OpcionIngresada;

	switch (OpcionIngresada) //donde opción es la variable a comparar
	{
	case 1: //Bloque de instrucciones 1;
		cout << "Ahora vas a registrar 5 articulos y por cada 3 items \n";
		Registrar();
		break;
	case 2: //Bloque de instrucciones 2;
		cout << "Ahora vas a ver todos los articulos y sus items \n";
		Listar();
		break;
	case 3: //Bloque de instrucciones 3;
		cout << "Ahora puedes eliminar articulos y sus items \n";
		Eliminar();
		break;
		//Nótese que valor 1 2 y 3 son los valores que puede tomar la opción
		//la instrucción break es necesaria, para no ejecutar todos los casos.
	default: //Bloque de instrucciones por defecto;
		cout << "Opcion Incorrecta \n";
	}
	return;
}


void Registrar()
{
	for (int i = 0; i < cantidadDeArticulos; i++)
	{
		cout << "\n";
		cout << "ARTICULO " << i + 1 << "\n";
		for (int j = 0; j < cantidadDeItems; j++)
		{
			if (j == 0)
			{
				cout << "Ingrese Tipo \n";
				string OpcionIngresada;

				cin >> OpcionIngresada;
				datosDeComputadora[j][i] = OpcionIngresada;
			}
			if (j == 1)
			{
				cout << "Ingrese Modelo \n";
				string OpcionIngresada;

				cin >> OpcionIngresada;
				datosDeComputadora[j][i] = OpcionIngresada;
			}
			if (j == 2)
			{
				cout << "Ingrese precio \n";
				string OpcionIngresada;

				cin >> OpcionIngresada;
				datosDeComputadora[j][i] = OpcionIngresada;
			}
		}
	}
}

void Listar()
{
	for (int i = 0; i < cantidadDeArticulos; i++)
	{
		cout << "\n";
		cout << "ARTICULO " << i + 1 << "\n";
		for (int j = 0; j < cantidadDeItems; j++)
		{
			if (j == 0)
			{
				cout << "Tipo: " << datosDeComputadora[j][i] << "\n";
			}
			if (j == 1)
			{
				cout << "Modelo: " << datosDeComputadora[j][i] << "\n";
			}
			if (j == 2)
			{
				cout << "precio: " << datosDeComputadora[j][i] << "\n";

			}
		}
	}
	cout << "\n";
}

void Eliminar()
{
	cout << "Elija la opcion del 1 hasta al 5 para eleguir un articulo a eliminar \n";
	cout << "Opcion 6 para eliminar TODOS los item de los articulos \n";
	cout << "Si elije otra opcion vuelve al menu principal \n";
	int OpcionIngresada;

	cin >> OpcionIngresada;

	switch (OpcionIngresada) //donde opción es la variable a comparar
	{
	case 1: //Bloque de instrucciones 1;
		cout << "Ahora vas a eliminar los item del articulo " << OpcionIngresada << "\n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
	case 2: //Bloque de instrucciones 2;
		cout << "Ahora vas a eliminar los item del articulo " << OpcionIngresada << "\n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
	case 3: //Bloque de instrucciones 3;
		cout << "Ahora vas a eliminar los item del articulo " << OpcionIngresada << "\n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
	case 4: //Bloque de instrucciones 3;
		cout << "Ahora vas a eliminar los item del articulo " << OpcionIngresada << "\n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
	case 5: //Bloque de instrucciones 3;
		cout << "Ahora vas a eliminar los item del articulo " << OpcionIngresada << "\n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
	case 6: //Bloque de instrucciones 3;
		cout << "Ahora se eliminaran todos los items de los articulos \n";
		for (int i = 0; i < cantidadDeItems; i++)
		{
			datosDeComputadora[OpcionIngresada][i] = "";
		}
		cout << "\n";
		break;
		//Nótese que valor 1 2 y 3 son los valores que puede tomar la opción
		//la instrucción break es necesaria, para no ejecutar todos los casos.
	default: //Bloque de instrucciones por defecto;
		cout << "Opcion Incorrecta \n";
		cout << "\n";
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
