#pragma once


class FuncionesConParametrosPorReferenc�a
{
public:
	FuncionesConParametrosPorReferenc�a();//metodo contructor

private:
	//"FUNCION" funcion comun que devuelve un valor de tipo entero
	void Funcion( int valor );

	//"ACCION" funcion con puntero como parametro, recibo la direccion de memoria de la variable , se suele utilizar para modificar valor de variable dentro de funciones de una manera media complicada
	void FuncionPunteros(int* valor);

	//"ACCION" funcion con parametro por referenc�a de tipo alias, es como si estuvi�ramos recibiendo la misma variable original y trabajando con ella para luego seguir utilizando el resultado en ella misma.
	void FuncionesconParametrosReferenciaPorAlias(int& valor);


};

