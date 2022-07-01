/* Este es mi primer programa en C */
#include <stdio.h>			//  Para para usar printf(), scanf(), fflush(),gets()
#include <stdlib.h>			//  Para usar system()
#include <math.h>			//  Para usar pow(base, exp) y sqrt(numero)

#define pausa system("pause")
#define cls system("cls")

// Funciones
int main()
{
	int calif;
	int i;				//  Controladora
	i = 1;				// inicialización de la controladora (sentinela)
	(i <= 10);			// condición (evaluación lógica) de la controladora verdadera >>>  repito
	printf("%d\n", i);	// Setencia o Bloque de sentencias a repetir
	i = i + 1;			// Incremento o decremento de la controladora

	//  Repetitiva pre-condición
	cls;
	printf("-----Repetitiva precondición---------------\n");
	i = 1;	
	while (i <= 10) 
	{
		printf("%d\n", i);		// Sentencia se ejecuta 0 o más veces
		i = i + 1;
	}
	pausa;
	printf("-----Repetitiva postcondición---------------\n");
	i = 1;
	do {
		printf("%d\n", i);		// Sentencia se ejecuta 1 o más veces
		i = i + 1;
	} while (i <= 10);
	pausa;
	printf("-----Repetitiva precondición---------------\n");
	for(i = 1; i <= 10; i = i + 1)
	{
		printf("%d\n", i);
	}

	// Estructura Selectiva (switch)
	printf("Dame la calificación numerica: ");
	scanf("%d", &calif);
	
	if(calif == 10) printf("LA calificación es A\n");
	if(calif == 9) printf("LA calificación es B\n");
	if(calif == 8) printf("LA calificación es C\n");
	if(calif == 7) printf("LA calificación es D\n");
	if(calif == 6) printf("LA calificación es E\n");
	if(calif <= 5 && calif >= 0) printf("LA calificación es F\n");

	pausa;
	printf("-----Estructura Selectiva---------------\n");

	// switch( valor integral )
	// {
	//		case valor1: sentencia;
	//		case valor2: sentencia;
	//		case valor3: sentencia;
	//		case valor4: sentencia;
	// }
	switch (calif)
	{
		case 10: {  printf("LA calificación es A\n"); break ;}
		case 9:  printf("LA calificación esB\n"); break;
		case 8:  printf("LA calificación es C\n"); break;
		case 7:  printf("LA calificación es D\n"); break;
		case 6:		{
						printf("LA calificación es E\n"); break;
					}
		case 5: case 4: 
		case 3: case 2: 
		case 1: case 0:  printf("LA calificación es F\n"); break;
		default: printf("Calificacion no válida!\n");
	}

	//  break y continue
	//  break =>  te saca de la estructura de control (salida incondicional)
	//  continue => te obliga a regresar a evaluar la condición (salto condicional)

	pausa;
	printf("-----Break---------------\n");
	for(i = 1; i <= 10; i = i + 1)
	{
		if( i % 5 == 0)
			break;
		printf("%d\n", i);
	}
		pausa;
	printf("-----continue---------------\n");
	for(i = 1; i <= 10; i = i + 1)
	{
		if( !(i % 5) )
			continue;
		printf("%d\n", i);
	}

	//  Operadores incremento (++) y decremento (--)
	//  Operador incremento (++) le suma 1 a su operando
	//  Operador decremento (--) le resta 1 a su operando
	pausa;
	printf("-----incremento---------------\n");
	for(i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	pausa;
	printf("-----decremento---------------\n");
	for(i = 10; i >= 0; i--)
	{
		printf("%d\n", i);
	}

	// incremento/decremento postfijo y/o prefijo
	// Prefija
	++i;				// Incremento solito es indiferente
	// postfija
	i++;				// Incremento solito es indiferente

	i = 10;
	printf("Postfijo: i = %d\n", i++);		//	Primero usas y despues incrementas
	printf("i = %d\n", i);
	i = 10;
	printf("Prefijo: i = %d\n", ++i);		// Primero incrementas y despues usas
	printf("i = %d\n", i);

	// Asignacion simple ( = )
	i = i + 1;

	// Asignación Compuesta ( +=, -=, *=, /=, %= ) 
	i += 1;

	//  Maneras de sumar 1
	i = i + 1;
	i += 1;
	i++;

	//  Maneras de sumar 2
	i = i + 2;
	i += 2;

	pausa;
	cls;
}


