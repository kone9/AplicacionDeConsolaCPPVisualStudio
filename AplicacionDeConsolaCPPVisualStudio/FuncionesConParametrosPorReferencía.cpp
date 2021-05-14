#include "FuncionesConParametrosPorReferencía.h"
#include <iostream>

using namespace std;

FuncionesConParametrosPorReferencía::FuncionesConParametrosPorReferencía()
{
	int numero = 10;
	cout << "antes de la funcion: " << numero << endl;

	Funcion(numero);//parametro por valor
	cout << "Despues de la funcion: " << numero << endl;

	cout << "Antes de la funcion punteros: " << numero << endl;
	FuncionPunteros(&numero);//referencia a la dirección de memoria de la variable numero //Se envía la dirección de memoria y la función resuelve la referencia
	cout << "Despues de la funcion punteros: " << numero << endl;

}

int FuncionesConParametrosPorReferencía::Funcion(int valor)
{
	valor = valor + 10;
	return valor;
}

int FuncionesConParametrosPorReferencía::FuncionPunteros(int* valor)//funcion con puntero como parametro
{
	*valor = *valor + 10;//la referencia a esa variable es igual a la referencia mas 10;
	return *valor;//regreso la referencia al valor
}

