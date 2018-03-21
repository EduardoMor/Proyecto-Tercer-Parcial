#include "Includes.h"

int main()
{
	int Operaciones1;
	float Operaciones2;
	int *Numeros = new int[500];

	ifstream Archivo;

	Archivo.open("Operaciones.txt", ios::in);

	if (Archivo.fail())
	{
		cout << "No se puedo abrir el archivo";
		exit(1);
	}

	while (!Archivo.eof())
	{
		for (int i = 0; i < 1; ++i)
		{
			getline(Archivo, Numeros[i]);
		}
	}








	return 0;
}