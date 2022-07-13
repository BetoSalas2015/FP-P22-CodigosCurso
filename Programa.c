/* Otri programa en C  del Curso*/
// LA criba de Eratóstenes
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system(), rand() y srand()
#include <math.h>			//  Para usar pow(base, exp) y sqrt(numero)
#include <time.h>			//  Para usar time()

#define pausa system("pause")
#define cls system("cls")

#define SIZE 150000

// Funciones
int main()
{
	int criba[SIZE];
	int i, j, tempo;

	srand( time(0) );				// DEfinimos la semilla de numeros aleaorios

	//  Inicializar a 1 los elementos del arreglo
	for(i = 0; i < SIZE; i++)
		criba[i] = rand() % 500;

	//   Imprimir los numeros desordenados

	/*for(i = 0; i < SIZE; i++)
			printf("%d, ", criba[i]);
	printf("\n\n");*/

	//  Proceso de la ordenamiento de Burbuja
	for(i = 0; i < SIZE; i++)				//  Por cada índice del arreglo...
	{
		for(j = i + 1; j < SIZE ; j++)			// ... recorro los siguientes.
		{
			if(criba[i] >= criba[j])	//  El numero guardado en i es menor al guardado en j?
			{
				tempo = criba[i];		//  ... Los intercambio
				criba[i] = criba[j];
				criba[j] = tempo;
			}
		}
	}

	//   Imprimir los numeros ordenados
	/*for(i = 0; i < SIZE; i++)
			printf("%d, ", criba[i]);
	printf("\n");*/

	pausa;
	cls;
}


