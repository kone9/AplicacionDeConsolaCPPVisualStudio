#include "Calcular_Texel_Density.h"
#include <iostream>
#include "stdio.h"
#include "string"

using namespace std;

Calcular_Texel_Density::Calcular_Texel_Density()
{
	/*printf("Ingrese la cantidad de metros del cubo");
	getline(cin, metroString);
	metro = stoi(metroString);*/
	
}

float Calcular_Texel_Density::CalcularTexelPorMetro(float metro)
{
	float tamanioDeCubo = metro; // tamanio del cubo en metros
	float tamanioDeTexel = 1024; //tamanio del texel que representa 1 metro
	float tamanioDeTextura = 2048;//tamanio de la textura usada

	float resultado = pow(1024, 2) * 1 / pow(2048, 2);

	return resultado;
}
