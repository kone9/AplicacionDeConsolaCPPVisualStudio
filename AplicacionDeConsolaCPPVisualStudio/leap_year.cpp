#include "leap_year.h"
#include <iostream>
#include "stdio.h"
#include "string"

using namespace std;

leap_year::leap_year()
{
	while (true)
	{
		printf("Enter the year \n");
		getline(cin, yearInput);
		year = stoi(yearInput);
		ItsLead(year);
		cout << "\n";
	}
}


void leap_year::ItsLead(int year)//si el año es bisiesto
{
	if (year % 400 == 0 )
	{
		printf("es bisiesto");
	}
	else if (year % 4 == 0 && year % 1 != 0)
	{
		printf("es Bisiesto");
	}
	else
	{
		printf("no es Bisiesto");
	}
}
