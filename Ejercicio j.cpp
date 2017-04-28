/*
Programa: Realice una funcion  que tome como parametros un vector de numeros  enteros y devuelva  la suma de sus elementos
Autor: Alejandro Santibañez Sanchez
Fecha: 24/04/2017
Resumen: Realice una funcion  que tome como parametros un vector de numeros  enteros y devuelva  la suma de sus elementos
*/

#include<stdio.h>

void PedirDatos();
int SumaVector(int vector[],int);

int vector[100],Elem;

int main(){
	PedirDatos();
	printf("\nLa suma es: %d ",SumaVector(vector,Elem));

	return 0;
}

void PedirDatos(){
	printf("Ingrese numero de elemento del vector: \n");
	scanf("%d", &Elem);

	for(int i = 0; i < Elem; i++){
		printf("Posicion %d: ",i+1,". Digite un numero: ");
		scanf("%d", &vector[i]);
	}
}

int SumaVector(int vector[],int Elem){
	int suma=0;

	for(int i=0;i<Elem;i++){
		suma += vector[i];
	}
	return suma;
}
