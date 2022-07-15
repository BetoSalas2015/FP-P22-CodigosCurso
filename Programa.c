/* Otri programa en C  del Curso*/
// LA criba de Eratóstenes
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system(), rand() y srand
#include <string.h>			//  Para usar las rutinas de cadenas

#define pausa system("pause")
#define cls system("cls")

#define SIZE 80

// Funciones
int main()
{
	char cadena[SIZE];
	int i, j;

	printf("Dame una cadena a analizar: ");
	gets(cadena);

	i = 0;
	while(cadena[i] != '\0')
	{
		if(cadena[i] >= 'a' && cadena[i] <= 'z')		// si es una letra minuscula
			cadena[i] -= 32;
		i++;
	}

	j = i - 1;				// nos posicionamos al final de la cadena
	i = 0;					//  y al principio de la misma

	while(i <= j)
	{
		if(cadena[i] == ' ')
			i++;
		if(cadena[j] == ' ')
			j--;
		if(cadena[i] != cadena[j])
		{
			printf("La cadena no es palindroma\n");
			pausa;
			exit(0);
		}
		i++;
		j--;
	}
	puts("LA cadena fue palindroma");
	
	
	pausa;
	cls;
}




