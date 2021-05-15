#include "FuncionesConParametrosPorReferencía.h"
#include <iostream>

using namespace std;

FuncionesConParametrosPorReferencía::FuncionesConParametrosPorReferencía()
{
	int numero = 10;

	cout << "antes de la funcion con parametro comun: " << numero << endl;
	Funcion(numero);//parametro por valor
	cout << "Despues de la funcion con parametro comun: " << numero << endl;

	cout << endl;

	cout << "Antes de la funcion punteros: " << numero << endl;
	FuncionPunteros(&numero);//referencia a la dirección de memoria de la variable numero //Se envía la dirección de memoria y la función resuelve la referencia
	cout << "Despues de la funcion punteros: " << numero << endl;

	cout << endl;

	cout << "Antes de la funcion con referencia por alias: " << numero << endl;
	FuncionesconParametrosReferenciaPorAlias(numero);//referencia por alias es como usar la misma variable pero con otra, tiene que devolver el resultado con la suma en la variable numero
	cout << "Despues de la funcion con referencia por alias: " << numero << endl;



}

int FuncionesConParametrosPorReferencía::Funcion(int valor)//funcion común y corriente recibe el valor de tipo entero como parametro
{
	valor = valor + 10;
	return valor;
}

int FuncionesConParametrosPorReferencía::FuncionPunteros(int* valor)//funcion con puntero como parametro, recibe la referencia a la memoria con "&nombrevariable"
{
	*valor = *valor + 10;//la referencia a esa variable es igual a la referencia mas 10;
	return *valor;//regreso la referencia al valor aca esta la magia de seguir aumentando el valor de esa variable
}

int FuncionesConParametrosPorReferencía::FuncionesconParametrosReferenciaPorAlias(int& valor)//funciona igual que un puntero, pero no recibe la referencia, sino la misma variable del mismo tipo
{
	valor = valor + 50;
	return valor;
}

