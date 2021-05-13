// AplicacionDeConsolaCPPVisualStudio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



void PunterosSinFormato();//para hacer ejercicios con punteros
void EjemploPunteroAsignacion(); //cambiar valores de variables usando punteros

int main()
{
	EjemploPunteroAsignacion();
	return 0;
}



///Punteros asingnacion por referencia a valores////
void EjemploPunteroAsignacion()
{
	int variable = 0;//creamos una variable
	cout << "valor de la variable al comienzo: " << variable << endl;
	
	int * apuntador = nullptr;//Creamos un apuntador 
	apuntador = &variable;//guardamos la dirección de memoría de donde esta alojada VARIABLE
	cout << "direccion de memoria de la variable variable: " << variable << endl;
	
	*apuntador = 20;// Asignamos a esa posicion de memoría un valor, osea sería como cambiar el valor de VARIABLE pero con un puntero
	cout << "valor de la variable luego de modificarla por referencia: " << variable << endl;
	
	*apuntador = *apuntador + variable;//Hago una suma haciendo referencia a valores
	cout << "Hago una suma haciendo referencia a valores: " << *apuntador << endl;//de esta forma trabajo directamente con la variable desde el puntero
	
	//delete[] apuntador;//despues de operar con punteros es necesario liberar la memoría
	
	cout << endl;

	char* apuntadorALetra = nullptr;//Declaramos un puntero. Es recomendable inicializar un puntero en null, para detectar errores fácilmente

	char letra;//declaramos una variable primitiva

	apuntadorALetra = &letra;//Asignamos al apuntador la dirección de memoria de la variable primitiva

	*apuntadorALetra = 'x';//modificamos la variable a traves del apuntador

	cout << "El valor por referencia modificado de 'letra' es: " << letra << endl;//de esta forma trabajo directamente con la variable desde el puntero


}



///////////////////////////////////////////////////////////////////////
///punteros ejercicio básico con clases///////
class MyClass
{
	private:
		int x;
	public:
		MyClass() :x(0) {}
};

//ejercicios de punteros uno
void PunterosSinFormato()
{
	int var = 250;//declaro variable
	int *ptr_var = &var;//guardo la direccion de memoría de var. se usa & para obtener la direccion de la memoría

	MyClass obj; //declaro variable de tipo clase
	MyClass* ptr_obj = &obj;//apuntando puntero a la direccion de memoria. se usa & para obtener la direccion de la memoría
	
	cout<< "valor de la variable: " << var << endl;
	cout << "direccion de memoria de la variable var: " << &var << endl;
	cout << "direccion almacenada en el ptr_var: " << ptr_var << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "direccion de memoria del objeto obj: " << &obj << endl;
	cout << "Direccion almacenada en el puntero ptr_obj: " << ptr_obj << endl;
}
/////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///Esto es un menu con opciones tengo que pasarlo a una clase

void MenuInicial();//muestra el menu inicial
void Registrar();//para guardar los articulos
void Listar();//para ver los articulos
void Eliminar();//para borrar los articulos


const int cantidadDeArticulos = 5;              //numero de filas

const int cantidadDeItems = 3;                             //numero de columnas

string  datosDeComputadora[cantidadDeArticulos][cantidadDeItems];

void iniciarMenu()
{
	while (true)
	{
		MenuInicial();
	}
}

void MenuInicial()//implemento la función
{
	cout << "Por favor ingrese el numero correcto para la accion a ejecutar \n";
	cout << "1 - Registrar \n";
	cout << "2 - Listar \n";
	cout << "3 - Eliminar \n";

	int OpcionIngresada;//para ingresar la opción correcta

	cin >> OpcionIngresada;	//hay que validar que el input no sea una letra, no lo voy a hacer, pero funciona con números correctamente.

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
				datosDeComputadora[i][j] = OpcionIngresada;
			}
			if (j == 1)
			{
				cout << "Ingrese Modelo \n";
				string OpcionIngresada;

				cin >> OpcionIngresada;
				datosDeComputadora[i][j] = OpcionIngresada;
			}
			if (j == 2)
			{
				cout << "Ingrese precio \n";
				string OpcionIngresada;

				cin >> OpcionIngresada;
				datosDeComputadora[i][j] = OpcionIngresada;
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
				cout << "Tipo: " << datosDeComputadora[i][j];
				cout << "\n";

			}
			if (j == 1)
			{
				cout << "Modelo: " << datosDeComputadora[i][j];
				cout << "\n";
			}
			if (j == 2)
			{
				cout << "precio: " << datosDeComputadora[i][j];
				cout << "\n";

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
	int opcionIngresada;

	cin >> opcionIngresada;


	switch (opcionIngresada) //donde opción es la variable a comparar
	{
		case 1: //Bloque de instrucciones 1;
			cout << "Ahora vas a eliminar los item del articulo " << opcionIngresada << "\n";
			for (int i = 0; i < cantidadDeItems; i++)
			{
				datosDeComputadora[0][i] = "";
			
			}
			cout << "\n";
			break;
		case 2: //Bloque de instrucciones 2;
			cout << "Ahora vas a eliminar los item del articulo " << opcionIngresada << "\n";
			for (int i = 0; i < cantidadDeItems; i++)
			{
				datosDeComputadora[1][i] = "";
			}
			cout << "\n";
			break;
		case 3: //Bloque de instrucciones 3;
			cout << "Ahora vas a eliminar los item del articulo " << opcionIngresada << "\n";
			for (int i = 0; i < cantidadDeItems; i++)
			{
				datosDeComputadora[2][i] = "";
			}
			cout << "\n";
			break;
		case 4: //Bloque de instrucciones 3;
			cout << "Ahora vas a eliminar los item del articulo " << opcionIngresada << "\n";
			for (int i = 0; i < cantidadDeItems; i++)
			{
				datosDeComputadora[3][i] = "";
			}
			cout << "\n";
			break;
		case 5: //Bloque de instrucciones 3;
			cout << "Ahora vas a eliminar los item del articulo " << opcionIngresada << "\n";
			for (int i = 0; i < cantidadDeItems; i++)
			{
				datosDeComputadora[4][i] = "";
			}
			cout << "\n";
			break;
		case 6: //Bloque de instrucciones 3;
			cout << "Ahora se eliminaran todos los items de los articulos \n";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < cantidadDeItems; j++)
				{
					datosDeComputadora[i][j] = "";
				}
			}
			cout << "\n";
			break;
			//Nótese que valor 1 2 y 3 son los valores que puede tomar la opción
			//la instrucción break es necesaria, para no ejecutar todos los casos.
		default: //Bloque de instrucciones por defecto;
			cout << "Opcion Incorrecta \n";
			cout << "\n";
			break;
	}
}

