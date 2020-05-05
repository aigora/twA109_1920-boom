#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(void) 
{
	int r=rand() % 2;
	int bote=0,jugar;
	char opcion;
	char nombre[15];
	
	printf("Bienvenido a Boom!\n\n\n");
	do
	{
	printf("Introduzca el nombre de su equipo:");
	gets (nombre);
	printf("El nombre seleccionado es %s.",nombre);
	
	fflush(stdin);
	printf("\n\nPrimera pregunta: ");
	switch (r){
	case 0: {
		printf ("¿Cuantos estados tiene Estados Unidos?\n");
		printf ("(A) 48 estados (B) 49 estados (C) 50 estados (D) 51 estados\n\n");
		scanf("%c",&opcion);
		
		switch(opcion)
		{
			case 'a':
			case 'A':printf("Opcion incorrecta"); break;
			case 'b':
			case 'B':printf("Opcion incorrecta"); break;
			case 'c':
			case 'C':{
			printf("Opcion correcta"); 
			bote=bote+200;
			break;
			}
			case 'd':
			case 'D':printf("Opcion incorrecta"); break;
		}break;
		
		case 1: {
		printf ("¿De que año es la Constitucion Española?\n");
		printf ("(A) De 1978. (B) De 1979. (C) De 1888. (D) De 1798\n\n");
		fflush(stdin);
		scanf("%c",&opcion);
		
		switch(opcion)
		{
			case 'a':
			case 'A':{
				printf("Opcion correcta");
				bote=bote+400;
				break;
			}
			case 'b':
			case 'B':printf("Opcion incorrecta"); break;
			case 'c':
			case 'C':printf("Opcion incorrecta"); break;
			case 'd':
			case 'D':printf("Opcion incorrecta"); break;
		}break;	}
	
	}	break;	}
	printf("\n\nEl equipo %s se ha llevado un bote final de %d euros.\n",nombre,bote);
	printf("\n¿Volver a jugar?\n 1- Si.  2- No.\n");
	scanf("%d",&jugar); 
		} while(jugar==1);
			return 0;
}
