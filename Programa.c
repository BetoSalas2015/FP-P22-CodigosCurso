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
	char cadena2[SIZE];
	int i = 0;
	char *cad;
	//printf("Dame una cadena: ");
	//gets(cadena);
	///*printf("Dame otra cadena: ");
	//gets(cadena2);*/
	////  strcpy()  Copia cadenas
	//strcpy(cadena2, cadena);

	//puts(cadena2);

	////  strlen()  te dice el tamaño de la cadena
	//i = strlen(cadena);
	//printf("El tamaño de la cadena es: %d\n", i );
	//printf("El tamaño de la cadena2 es: %d\n", strlen(cadena2) );

	////  strcmp()   Compara cadenas
	//if( strcmp(cadena, cadena2) == 0 )
	//	puts("Las cadenas son iguales ");
	//if( strcmp(cadena, "Martinez") < 0)
	//	puts("La cadena uno es mas pequeña");
	//if( strcmp(cadena, "Martinez") > 0)
	//	puts("La cadena uno es mas grande");
	//
	//// strcat() concatena cadena 
	//strcpy(cadena2, "Tu apellido es: ");
	//puts( strcat(cadena2, cadena) );
	//puts(cadena);
	//puts(cadena2);

	////  strtok() rompe una cadena en tokens ( sub cadenas )
	//printf("Dame tu nombre: ");
	//gets(cadena);						//  "Roberto Salazar Márquez"

	//puts( strtok(cadena, " ") );		//  imprime "Roberto"
	//puts( strtok(NULL, " ") );			//  imprime "Salazar"
	//puts( strtok(NULL, " ") );			//  imprime "Marquez"
	//puts( strtok(NULL, " ") );			//   Error la cadena se acabó (regresó NULL)

	printf("Dame tu nombre otra vez: ");
	gets(cadena);						//  "Roberto Salazar Márquez"
	cad = strtok(cadena, " ");
	while( cad != NULL)
	{
		puts( cad );
		cad = strtok(NULL, " ");
	}
	
	pausa;
	cls;
}




