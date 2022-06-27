/* Este es mi primer programa en C */
#include <stdio.h>			//  Para para usar printf()
#include <stdlib.h>			//  Para usar system()
#include <string.h>			// Para manejo de cadenas (string)

#define pausa system("pause")


// Funciones
int main()
{
	const float PI = 3.14159;		// Declarqción de constantes
	float pi = 3.014159;						// Declaración de una variable float llamada pi
	float area = 0.00000025852;
	int edad = 45;
	char car = 'A';
	char cad[] = "Saludos Programas!!!\n";
	
	printf("pi = %15.3f y area = %f\n", PI, area);		// invoco  printf(); es una función y es una sentencia
	printf("Edad = %+-020d, car = %c = '%c', = %d \n", edad, car, car, car);
	printf("Cadena = %s \n",cad);
	printf(cad);
	printf("Impuesto del 25%% = %f \n", edad * 0.25);
	printf("LA dirección de memoria de la variable edad es: %p\n", &edad);
	pausa;
}


