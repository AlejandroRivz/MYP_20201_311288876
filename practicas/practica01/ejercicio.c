#include <stdio.h>
#include <stdlib.h>
/*Programa que imprime los numeros primos en [2,n] con n un numero ingresado desde entrada standard por el usuario
*Autor: Javier Alejandro Rivera Zavala
*Practica 01 de la clase de modelado y programacion
*/ 

/*Funcion que verifica si un natural dado es primo
*int operando : el numero a verificar.
*retorna un  valor entero que confirma si operando es primo (0) o si no lo es (1).
*/
int esPrimo(int operando){
	int contador = 1;
	for(int divisor = 2; divisor <= operando; divisor++){
		if(operando%divisor == 0)contador++;
		if(contador > 2)break;
	}
	if(contador == 2)return 0;
	return 1;
}


/*Entrada a ejecucion en main que presenta la interfaz de texto*/
int main(){

	int cota, verificador = 0;
	
	printf("Bienvenido, ingrese un numero\n");
	while(verificador == 0){
	    scanf("%d",&cota);
	    if(cota < 0){printf("Ese no es un numero valido\n");}
	    if(cota == 1){printf("Escribe un numero mayor que ese (no hay primos anteriores a 1)\n");}
	    if(cota >1){
	        verificador = 1;
	        for(int dividendo = 2; dividendo <= cota; dividendo++){	            
			    if(esPrimo(dividendo) == 0)printf("%d\n",dividendo);
		    }	
	    }
	}
	printf("Adios");
	return 0;	
}



	
		
		