#include <stdio.h>
#include <stdlib.h>
#define N 100

/*
0-La bomba explota
1-No hay explosion 
*/

 

int imprimir_pregunta (int *);

int explosion_bomba_funcion (int);

int main(void) 
{
	int salida_bucle_main = 0;
	int estado_explosion = 0;
	int bote_funcion_principal=0;
	char opcion;
	int seguir_jugando;
	char nombre_del_grupo[15]; 
	
	
	printf("Bienvenido a Boom!\n\n\n");
	printf ("<<<====================>>>\n\n\n");
    do
    {   fflush(stdin);
	    printf("Introduzca el nombre de su equipo:");
	    gets (nombre_del_grupo);
	    printf("El nombre seleccionado es %s.\n\n\n",nombre_del_grupo);
	    printf ("<<<====================>>>\n\n\n");
		fflush(stdin);
	
	//Primera pregunta
	
	    printf ("Primera pregunta: \n");
	    estado_explosion = imprimir_pregunta(&bote_funcion_principal); //Se obtiene el estado de la explosion de la bomba 
	    
		if (estado_explosion == 1) //Con esta sentencia se sale del bucle do-While; La bomba explota
		{
			break;
		}
		
		printf ("\n\n\n<<<====================>>>\n\n\n");
		
	//Segunda pregunta
	
	    printf ("Segunda pregunta: \n");
	    estado_explosion = imprimir_pregunta(&bote_funcion_principal); //Se obtiene el estado de la explosion de la bomba 
	    
		if (estado_explosion == 1) //Con esta sentencia se sale del bucle do-While; La bomba explota
		{
			break;
		}
		
		printf ("\n\n\n<<<====================>>>\n\n\n");
		
	//Tercera pregunta
	
	    printf ("Tercera pregunta: \n");
	    estado_explosion = imprimir_pregunta(&bote_funcion_principal); //Se obtiene el estado de la explosion de la bomba 
	    
		if (estado_explosion == 1) //Con esta sentencia se sale del bucle do-While; La bomba explota
		{
			break;
		}
		
		printf ("\n\n\n<<<====================>>>\n\n\n");
		
	//Cuarta pregunta
	
	    printf ("Cuarta pregunta: \n");
	    estado_explosion = imprimir_pregunta(&bote_funcion_principal); //Se obtiene el estado de la explosion de la bomba 
	    
		if (estado_explosion == 1) //Con esta sentencia se sale del bucle do-While; La bomba explota
		{
			break;
		}
		
		printf ("\n\n\n<<<====================>>>\n\n\n");
	    
	    
	    printf("\n\nEl equipo %s se ha llevado un bote final de %d euros.\n",nombre_del_grupo,bote_funcion_principal);
	    
		printf("\nVolver a jugar?\n 1- Si.  2- No.\n");
		
	    scanf("%d",&seguir_jugando);
		 
	} while(seguir_jugando==1);
	
	return 0;
}


int imprimir_pregunta (int *bote_paso_por_ref)
{
	int n;
	int estado_explosion_funcion = 0; // Este valor se devuelve de la funcion; Controla el estado de la bomba
	srand(time(NULL)); // Se randomiza la variable n en funcion del tiempo de tu PC
	n = rand() % 15;
	char opcion; // Variable para coger las letras de las respuestas
	*bote_paso_por_ref = 0;// Bote que lleva el equipo se pasa por referencia
	
	switch (n)
	{
		case 0:
	   {
			printf ("Cuantos estados tiene EEUU?\n\n");
			printf ("(A) 48 estados (B) 49 estados (C) 50 estados (D) 51 estados\n\n");
			fflush (stdin);
			scanf("%c",&opcion);
			switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'c':
				case 'C':
					{
						printf("Opcion correcta");
						estado_explosion_funcion=0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200
						;break;
					}
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }		
			}break;
		}break;
			
	    case 1:
	   {
			printf ("De que anyo es la Constitucion Espanyola?\n\n");
	        printf ("(A) De 1978 (B) De 1979 (C) De 1888 (D) De 1798\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
					{
						printf("Opcion correcta");
						estado_explosion_funcion=0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
					}
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			}break;
		}break;
			
	        
	    case 2:
	   {
	    	printf ("Quien escribio 'La Republica'?\n\n");
	        printf ("(A) Socrates (B) Aristoteles (C) Tales de Mileto (D) Platon\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
				   {
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				   }	
			}break;
	    }break;
	    
	    case 3:
	   {
		    printf ("Cual es la isla mas grande del mundo?\n\n");
	        printf ("(A) Groenlandia (B) Islas Canarias (C) Hawaii (D) Bali\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
		   {
				case 'a':
				case 'A':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
			}break;
	    }break;
		     
	    case 4:
		{
		    printf ("En que guerra participo Juana de Arco?\n\n");
	        printf ("(A) Segunda Guerra Mundial (B) La guerra de los 100 anyos (C) La guerra de los 70 anyos (D) Primera Guerra Mundial\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
					
			
				case 'b':
				case 'B':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		    }break;
		}break;
	    
		case 5:
	    {
		    printf ("Cuando llego el primer hombre a la Luna?\n\n");
	        printf ("(A) 1999 (B) 1969 (C) 1949 (D) 1966\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		    }break;
		}break;
		    
	    case 6:
	    {
		    printf ("En que anyo se creo la WORLD WIDE WEB?\n\n");
	        printf ("(A) 1990 (B) 1899 (C) 1991 (D) 1980\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }					
				
				
				case 'c':
				case 'C':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		    }break;
		}break;
		    
	    case 7:
	    {
		    printf ("Cual es el idioma mas hablado del mundo?\n\n");
	        printf ("(A) Ingles (B) Frances (C) Espanyol (D) Chino mandarin\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
					
				
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
				case 'd':
				case 'D':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
		    }break;
		}break;
		    
		case 8:
		{
		    printf ("Donde se encuentra el desierto del Gobi?\n\n");
	        printf ("(A) Africa (B) Europa (C) Asia (D) America del norte\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
					
				
				case 'c':
				case 'C':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
			
	    case 9:
	    {
		    printf ("En que anyo fue asesinado John F. Kennedy?\n\n");
	        printf ("(A) 1978 (B) 1963 (C) 1888 (D) 1949\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
			
				case 'b':
				case 'B':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
					
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
	    	
	    case 10:
	   {
		    printf ("Quien fue el primer presidente de EEUU?\n\n");
	        printf ("(A) George Washington (B) Donald Trump (C) John Adams (D) Thomas Jefferson\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':	
				    {
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
					
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
		    
	    case 11:
	   {
		    printf ("En que anyo se disolvio la URSS?\n\n");
	        printf ("(A) 1991 (B) 1990 (C) 1997 (D) 1989\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':	
				    {
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
				
					
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
		    
        case 12:
       {
		    printf ("Quien fue el padre de la bomba atomica?\n\n");
	        printf ("(A) A. Einstein (B) Robert Oppenheimer (C) Hans Bethe (D) Juri Jariton\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
				    
			
				case 'b':
				case 'B':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
				
					
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
		
				
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
		    
	    case 13:
	   {
		    printf ("Cual es la capital de Filipinas?\n\n");
	        printf ("(A) Kabul (B) Luanda (C) Manila (D) Daca\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
				    
			
				case 'b':
				case 'B':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
					
					
				case 'c':
				case 'C':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
			
			
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
	    	
	    case 14:
	   {
		    printf ("En que anyo empezo la invasion arabe en Espanya?\n\n");
	        printf ("(A) 632 (B) 711 (C) 1042 (D) 712\n\n");
	        fflush (stdin);
	        scanf("%c",&opcion);
	        switch (opcion)
			{
				case 'a':
				case 'A':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
				    
			
				case 'b':
				case 'B':
					{
						printf("Opcion correcta");
						estado_explosion_funcion = 0;
						*bote_paso_por_ref = *bote_paso_por_ref + 200;break;
				    }
					
					
				case 'c':
				case 'C':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }
					
			
			
				case 'd':
				case 'D':
				{
				estado_explosion_funcion = 1;
				printf("Opcion incorrecta"); break;
			    }	
		    }break;
		}break;
	}
	
	return (estado_explosion_funcion);
	
}




