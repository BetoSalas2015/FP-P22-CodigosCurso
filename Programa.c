/* Este es mi primer programa en C */
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system()

#define pausa system("pause")
#define cls system("cls")

// Funciones
int main()
{
	const float PI = 3.14159;		// Declarqción de constantes
	float pi = 3.014159;						// Declaración de una variable float llamada pi
	float area = 0.00000025852;
	int edad = 45;
	char car = 'A';
	char cad[19] = "Saludos Programas!!!\n";
	int hora = 0, minutos;
	//  scanf()
	printf("Dame la edad: ");
	scanf("%d", &edad);
	printf("Dame la el area: ");
	scanf("%f", &area);
	fflush(stdin);
	printf("Dame un caracter: ");
	car = getchar();
	printf("Dame la hora y munutos: ");
	scanf("%d:%d", &hora, &minutos);
	fflush(stdin);
	printf("Dame una cadena: ");
	gets(cad);
	
	//  printf()
	printf("pi = %15.3f y area = %f\n", PI, area);		// invoco  printf(); es una función y es una sentencia
	printf("Edad = %+-020d, car = %c = '%c', = %d \n", edad, car, car, car);
	printf("Cadena = %s \n",cad);
	printf("%s\n",cad);
	printf("Impuesto del 25%% = %f \n", edad * 0.25);
	printf("LA dirección de memoria de la variable edad es: %p\n", &edad);
	printf("Hora: %d:%02d\n", hora, minutos);
	
	pausa;
	cls;
}


