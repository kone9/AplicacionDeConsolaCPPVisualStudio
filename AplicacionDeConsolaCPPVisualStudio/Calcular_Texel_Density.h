#pragma once
#include <math.h>


class Calcular_Texel_Density
{
	Calcular_Texel_Density();

	private:
		float CalcularTexelPorMetro(float metro);
		int metro;
		string metroString;
};

