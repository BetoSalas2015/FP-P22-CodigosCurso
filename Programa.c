/* Otri programa en C  del Curso*/
// LA criba de Eratóstenes
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system()
#include <math.h>			//  Para usar pow(base, exp) y sqrt(numero)

#define pausa system("pause")
#define cls system("cls")

#define SIZE 100

// Funciones
int main()
{
	int criba[SIZE];
	int i, j;

	//  Inicializar a 1 los elementos del arreglo
	for(i = 0; i < SIZE; i++)
		criba[i] = 1;

	//  Proceso de la criba de Eratóstenes
	for(i = 4; i < SIZE; i++)				//  Por cada índice del arreglo...
	{
		for(j = i - 1; j > 1 ; j--)			// ... recorro los anteriores.
		{
			if((i % j) == 0)
				criba[i] = 0;
		}
	}

	//   Imprimir los numeros primos
	for(i = 1; i < SIZE; i++)
		if(criba[i] == 1)
			printf("%d, ", i);
	printf("\n");

	pausa;
	cls;
}


