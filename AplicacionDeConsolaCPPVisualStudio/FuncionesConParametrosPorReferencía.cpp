#include "FuncionesConParametrosPorReferenc�a.h"
#include <iostream>

using namespace std;

FuncionesConParametrosPorReferenc�a::FuncionesConParametrosPorReferenc�a()
{
	int numero = 10;
	cout << "antes de la funcion: " << numero << endl;

	Funcion(numero);//parametro por valor
	cout << "Despues de la funcion: " << numero << endl;

	cout << "Antes de la funcion punteros: " << numero << endl;
	FuncionPunteros(&numero);//referencia a la direcci�n de memoria de la variable numero //Se env�a la direcci�n de memoria y la funci�n resuelve la referencia
	cout << "Despues de la funcion punteros: " << numero << endl;

}

int FuncionesConParametrosPorReferenc�a::Funcion(int valor)
{
	valor = valor + 10;
	return valor;
}

int FuncionesConParametrosPorReferenc�a::FuncionPunteros(int* valor)//funcion con puntero como parametro
{
	*valor = *valor + 10;//la referencia a esa variable es igual a la referencia mas 10;
	return *valor;//regreso la referencia al valor
}

