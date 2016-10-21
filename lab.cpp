#include <iostream>
#include <cmath>;
using namespace std;

int main() 
{
	int opcion;
	do 
	{
		cout << "---Menu---" endl;
		cout << "1. Ejercicio 1.";
		cout << "2. Ejercicio 2.";
		cout << "3. Ejercicio 3.";
		cout << "4. Salir.";
		cout << "Ingrese su opcion:"
		cin >> opcion;
		if (opcion == 1) {
			String cadena;
			cout << "Ingrese un numero pandigital:";
			cin >> cadena;
			int arreglo[cadena.size];
			for (int i = 0; i < cadena.size; ++i)
			{
				 arreglo[i] = cadena[i];
			}//Fin del for
			
		}//Fin del if
		if (opcion == 2) {



		}//Fin del if
		if (opcion == 3) {


		}//Fin del if
	} while (opcion != 4);
	return 0;
}//Fin del main