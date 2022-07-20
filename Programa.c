/* Otro programa en C  del Curso*/
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system(), rand() y srand

#define pausa system("pause")
#define cls system("cls")

FILE *lectura, *escritura;

// Funciones

void main()
{
	char cadena[80];
	lectura = fopen("Programa.c","r");		//  Abrimos el flujo de datos como de lectura
	if( lectura == NULL)		// hubo un problema, el archivo no se creó
	{
		printf("ERROR: El archivo no existe en el directorio. ");
		pausa;
		return 1;
	}
	escritura = fopen("Copia de Programa.c","w");		//  Abrimos el flujo de datos como de lectura
	if( escritura == NULL)		// hubo un problema, el archivo no se creó
	{
		printf("ERROR: El archivo no existe en el directorio. ");
		pausa;
		return 1;
	}

	while( !feof(lectura) )
	{
		fgets(cadena,80,lectura);
		printf(cadena);
		fputs(cadena,escritura);
	}
	fclose(lectura);			//  Cerramos el flujo de datos
	fclose(escritura);
	pausa;
	cls;
}
