/*
Programa: Defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento
Autor: Alejandro Santiba�es Sanchez
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
