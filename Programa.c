/* Este es mi primer programa en C */
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system()
#include <math.h>			//  Para usar pow(base, exp) y sqrt(numero)

#define pausa system("pause")
#define cls system("cls")

// Funciones
int main()
{
	int i;
	int Costo;				//  Declaro una variable entera llamada costo
	//  Declaro un arreglo de 5 enteros llamado Calificaciones
	int Calificaciones[100];

	for(i = 0; i < 100; i += 2)
		Calificaciones[i] = i;

	pausa;
	cls;
}


