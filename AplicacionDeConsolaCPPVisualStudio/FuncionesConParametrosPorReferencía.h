#pragma once


class FuncionesConParametrosPorReferencía
{
public:
	FuncionesConParametrosPorReferencía();//metodo contructor

private:
	//funcion comun
	int Funcion( int valor );

	//funcion con puntero como parametro, recibo la direccion de memoria de la variable, se suele utilizar para modificar valor de variable dentro de funciones de una manera media complicada
	int FuncionPunteros(int* valor);

	//funcion con parametro por referencía de tipo alias, es como si estuviéramos recibiendo la misma variable original.
	int FuncionesconParametrosReferenciaPorAlias(int& valor);


};

