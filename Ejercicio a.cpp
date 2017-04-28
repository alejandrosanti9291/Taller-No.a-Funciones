/*
Programa: Defina un vector de números y muestre en la salida estándar el vector en orden inverso—del último al primer elemento
Autor: Alejandro Santibañes Sanchez
Fecha: 23/03/2017
Resumen: Programa que define un vector y muestra en la salida el vector en orden inverso.
*/

#include<stdio.h>

int main(){
	int longitud = 4,i;
	int vector[longitud];

	for(i = 0;i < longitud;i++){
		printf("Ingrese un numero \n");
		scanf("%d", &vector[i]);
	}
	for(i = 3;i >= 0;i--){
		printf("%d ", vector[i]);
	}
	return 0;
}
