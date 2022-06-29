/* Este es mi primer programa en C */
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system()
#include <math.h>			//  Para usar pow(base, exp) y sqrt(numero)

#define pausa system("pause")
#define cls system("cls")

// Funciones
int main()
{
	int entero;
	// 0 - false
	// 1 y todo lo demás - true
	//  Operador de igualdad (==)   Ej.   2 == 3 => 0
	printf("2 == 3? => %d\n", (2 == 3) );
	printf("3 == 3? => %d\n", 3 == 3 );
	//  Operador de no igualdad (!=)   Ej.   2 != 3 => 1
	printf("2 != 3? => %d\n", (2 != 3) );
	printf("3 != 3? => %d\n", 3 != 3 );
	//  Operador mayor que (>)
	printf("2 > 3? => %d\n", (2 > 3) );
	//  Operador mayor o igual que ( >= )
	printf("3 >= 3? => %d\n", 3 <= 3 );
	//  Operador menor que (<)
	printf("2 < 3? => %d\n", (2 < 3) );
	//  Operador menor o igual que ( <= )
	printf("3 <= 3? => %d\n", 3 <= 3 );

	// Operadores Lógicos
	//  Operador y lógico AND ( && )
	printf("Tabla de Verdad del y (AND)\n");
	printf("\ta\tb\t(a && b)\n");
	printf("\t0\t0\t   %d\n", 0 && 0);
	printf("\t0\t1\t   %d\n", 0 && 1);
	printf("\t1\t0\t   %d\n", 1 && 0);
	printf("\t1\t1\t   %d\n", 1 && 1);

	//  Operador y lógico OR ( || )
	printf("\nTabla de Verdad del O (OR)\n");
	printf("\ta\tb\t(a || b)\n");
	printf("\t0\t0\t   %d\n", 0 || 0);
	printf("\t0\t1\t   %d\n", 0 || 1);
	printf("\t1\t0\t   %d\n", 1 || 0);
	printf("\t1\t1\t   %d\n", 1 || 1);

	//  Operador negación lógica NOT ( ! )
	printf("Tabla de Verdad de la negación (AND)\n");
	printf("\ta\t   (!a)\n");
	printf("\t0\t   %d\n", !0);
	printf("\t1\t   %d\n", !1);

	printf("\n\n-------Condicional Simple------------\n");
	printf("DAme un numero: ");
	scanf("%d", &entero);
	if(entero > 2)
	{
		printf(" Es mayor que dos\n");
	}

	printf("\n---------Condicional Completa----------\n");
	if(entero < 3)
	{
		printf(" Es menor que tres\n");
	}
	else
	{
		printf("No es menor que tres\n");
	}
	pausa;
	cls;
}


