/* Otro programa en C  del Curso*/
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system(), rand() y srand

#define pausa system("pause")
#define cls system("cls")
#define delay system("timeout 10")
//  Prototipos
int square(int num);

// Funciones
//  Definici�n (Declaraci�n) de Funcion  


void main()
{
	int x, res;
	delay;
	system("chcp 850");
	printf("Dame un n�mero:");
	scanf("%d", &x);
	res = square(x);
	// Invocaci�n de una funci�n
	printf("El resultado de elevar %d al cuadrado es: %d\n", x, res );
	pausa;
	cls;
}

int square(int num) 
{
	return (num * num); 
}
