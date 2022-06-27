#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause")

int main()
{
	char nombre[20], paterno[20], materno[20];
	char clave_elector[19], curp[19], direccion[30];
	int registro, estado, municipio, seccion, localidad, emision, vigencia;

	// Petición de Datos
	printf("Nombre: \t\t");
	gets(nombre);
	printf("Apellido paterno: \t");
	gets(paterno);
	printf("Apellido Materno: \t");
	gets(materno);
	printf("Dirección: \t\t");
	gets(direccion);
	printf("Clave de elector: \t");
	gets(clave_elector);
	printf("CURP: \t\t\t");
	gets(curp);
	printf("Año de registro: \t");
	scanf("%d", &registro);
	printf("Estado: \t\t");
	scanf("%d", &estado);
	printf("Municipio: \t\t");
	scanf("%d", &municipio);
	printf("Sección: \t\t");
	scanf("%d", &seccion);
	printf("Localidad: \t\t");
	scanf("%d", &localidad);
	printf("Emisión: \t\t");
	scanf("%d", &emision);
	printf("Vigencia: \t\t");
	scanf("%d", &vigencia);
	pausa;

	// Impresión de datos
	printf("+---------------------------------------------------------+\n");
	printf("|                        INSTITUTO NACIONAL ELECTORAL     |\n");
	printf("|                        Credencial para Votar            |\n");
	printf("| +--------+ Nombre:                                      |\n");
	printf("| |///-\\\\\\ | %-20s                         |\n",nombre);
    printf("| ||^   ^| | %-20s                         |\n",paterno);
    printf("| ||O   O| | %-20s                         |\n",materno);
	printf("| ||  ~ *| | Direcci½n:                                   |\n");
    printf("| | \\ O /  | %-30s               ³\n",direccion);
    printf("| |  | |   | Clave de Elector: %-20s       |\n",clave_elector);
    printf("| | _| |_  | CURP: %-20s Registro: %4d    |\n",curp, registro);
    printf("| |        | Estado: %2d  " , estado);
    printf("Municipio: %2d  ", municipio);
    printf("Secci½n: %2d       |\n", seccion);
	printf("| +--------+ Localidad: %4d ",localidad);
    printf("Emision: %4d  ", emision);
    printf("Vigencia:%4d |\n", vigencia);
	printf("|                                                         |\n");
	printf("+---------------------------------------------------------+\n");

	pausa;
}