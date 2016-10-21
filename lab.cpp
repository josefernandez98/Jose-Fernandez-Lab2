#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
using namespace std;

void imprimirArreglo (int[], int);
int divisonMetodo (int);
int recursivo (int);

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
			int numero = 0;
			int resultadoFinal = 0;
			cout << "Ingrese un numero:";
			cin >> numero;
			int contador = 0;
			//Determinar tamaño
			for (int i = 1; i <= numero; ++i)
			{
				if (numero % i == 0) {
					contador++;
				}//Fin del if
			}//Fin del for
			int divisores[contador];
			int resultadoDivisiones[contador];
			int size = 0;
			//Determinar divisores
			for (int i = 1; i <= numero; ++i)
			{
				if (numero % i == 0) {
					divisores[size] = i;
					size++;
				}//Fin del if	
			}//Fin del for
			int esPrimo = 0; 
			int tamanno = 0;
			for (int i = 0; i < contador; ++i)
			{
				resultadoDivisiones[i] = (divisores[i] + numero)/divisores[i];
				tamanno++;
			}//Fin del for
			for (int i = 0; i < tamanno ; ++i)
			{
				esPrimo = divisonMetodo(resultadoDivisiones[i]);
				if (esPrimo == 1) {
					resultadoFinal += resultadoDivisiones[i];
				}//FIn del if
			}//Fin del for
			cout << resultadoFinal << endl ;
		}//Fin del if opcion 2
		if (opcion == 3) {
			string cadenaNum;
			cout << "Ingrese un numero:";
			cin >> cadenaNum;
			int tam = cadenaNum.size();
			int arregloNumeros[tam];
			int total = 0;
			for (int i = 0; i < tam; ++i)
			{
				arregloNumeros[i] = cadenaNum[i];
				arregloNumeros[i]-=48;
				total += arregloNumeros[i];
			}//Fin del for
			
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
} //Fin del metodo

int divisonMetodo (int a) {
	int cantidad = 0;
	for (int i = 1; i < a; ++i)
	{
		if (a % i == 0) {
			cantidad++;
		}
	}
	return cantidad;
} //Fin del metodo