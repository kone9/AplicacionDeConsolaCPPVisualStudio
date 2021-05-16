#include "PalindromoEjercicio.h"


PalindromoEjercicio::PalindromoEjercicio()
{
	string textoIngresado;
	while (true)
	{
		cout << "ingrese un texto para saber si es palindromo" << endl;
		cin >> textoIngresado;
		VerificarSiEsPalindromo(textoIngresado);
		cout << endl;
	}
	
}

void PalindromoEjercicio::VerificarSiEsPalindromo(string cadena)
{
	//cout << cadena.size() << endl;
	int contador = 0;
	for (int j = cadena.size() -1 ; j >= 0; j--)//es decremental -1 porque la cadena commienza desde cero
	{
		if (cadena[contador] != cadena[j])//si son diferentes no es Palindromo
		{
			cout << "La palabra: '" << cadena << "'. "<< "No es Palindromo" << endl;
			return;
		}
		contador += 1;
	}
	//si pasa todo el bucle, es Palindromo
	cout << "La palabra: '" << cadena << "'. " << "Es Palindromo" << endl;
}
