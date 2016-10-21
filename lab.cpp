#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
using namespace std;

void imprimirArreglo (int[], int);

int main(int argc, char const *argv[])

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
			int auxiliar = 0;
			for (int i = 0; i < tam; ++i)
			{
				if (arreglo[i] > auxiliar) {
					auxiliar = arreglo[i];
				}//Fin del if
			}//Fin del for
			int basePan = auxiliar + 1;
			int baseDec = 0;
			int contador = 0;
			for (int i = tam - 1; i >= 0; --i)
			{
				baseDec += arreglo[contador] * pow(basePan, i);
				contador++;
			}//Fin del for
			cout << cadena << " esta en base " << basePan << " y equivale a " << baseDec << " en decimal" << endl;
		}//Fin del i
		if (opcion == 2) {
			int numero;
			int resultadoFinal;
			cout << "Ingrese un numero:";
			cin >> numero;
			int contador = 0;
			for (int i = 1; i <= numero; ++i)
			{
				if (numero % i == 0) {
					contador++;
				}//Fin del if
			}//Fin del for
			int divisores[contador];
			int resultadoDivisiones[contador];
			int size = 0;
			for (int i = 1; i <= numero; ++i)
			{
				if (numero % i == 0) {
					divisores[size] = i;
					size++;
				}//Fin del if	
			}//Fin del for

			for (int i = 0; i < size; ++i)
			{
				resultadoDivisiones[i] = (divisores[i] + numero)/divisores[i];
			}//Fin del for
			imprimirArreglo(resultadoDivisiones, size);


		}//Fin del if
		if (opcion == 3) {


		}//Fin del if
	} while (opcion != 4);
	return 0;
}//Fin del main

void imprimirArreglo (int arreglo[], int a) {
	for (int i = 0; i < a; ++i)
	{
		cout << arreglo[i] << ",";
	}
	cout << endl;
} 