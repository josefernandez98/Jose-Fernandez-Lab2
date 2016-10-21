#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void imprimirArreglo (int[], int);

int main() 
{
	int opcion;
	do 
	{
		cout << "---Menu---" << endl;
		cout << "1. Ejercicio 1." << endl;
		cout << "2. Ejercicio 2." << endl;
		cout << "3. Ejercicio 3." << endl;
		cout << "4. Salir." << endl;
		cout << "Ingrese su opcion:";
		cin >> opcion;
		if (opcion == 1) {
			string cadena;
			cout << "Ingrese un numero pandigital:";
			cin >> cadena;
			int arreglo[cadena.size()];
			int temp = 0;
			for (int i = 0; i < cadena.size(); ++i)
			{
				 arreglo[i] = cadena[i];
				 arreglo[i] -= 48; 
			}//Fin del for
			cout << endl;
			int tam = cadena.size();
			int temporal = 0;
			for (int i = 0; i < tam; ++i)
			{
				for (int j = i; j < tam - i; ++j)
				{
					if (arreglo[j] >= arreglo[j+1]) {
						temporal = arreglo[j];
						arreglo[j] = arreglo[j+1];
						arreglo[j+1] = temporal;
					}
					cout << arreglo[j] << ";";
				}//Fin del for
			}//Fin del for
			imprimirArreglo(arreglo, tam);
		}//Fin del if
		if (opcion == 2) {



		}//Fin del if
		if (opcion == 3) {


		}//Fin del if
	} while (opcion != 4);
	return 0;
}//Fin del main


void imprimirArreglo (int arreglo[], int tam) {
	for (int i = 0; i < tam; ++i)
	{
		cout << "[" << arreglo[i] << "]";
	}
}//Fin del metodo


