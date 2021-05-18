#pragma once
#include <iostream>
#include "stdio.h"
using namespace std;

//En este ejercicio se usan punteros para array dinamicos para determinar cantidad de libros y autores
class ArrayDinamicoPunteros
{
public:
	ArrayDinamicoPunteros();

private:

	//dependiendo la cantidad de libros guarda el autor y libro
	void GuardarTitulosYAutoresDeLibros(int cantidadDeLibros);

	//verifica la cantidad de libros y autores
	void VerificarLibrosYAutores();
	
	//titulos de los libros punteros para arreglos dinamicos
	string* titulos = nullptr;

	//titulos de los autores punteros para arreglos dinamicos
	string* autores = nullptr;

	//cantidad de libros
	int tamanio;

	//entrada de texto
	string entrada;

};



