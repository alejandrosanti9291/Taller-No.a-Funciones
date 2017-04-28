/*
Programa:  Lea de la entrada estándar un vector de enteros y determine el mayor y menor elemento del vector
Autor: Alejandro Santibañez Sanchez
Fecha: 23/03/2017
Resumen:  Programa que lea de la entrada estándar un vector de enteros y determine el mayor y menor elemento del vector
*/

#include<stdio.h>

int main(){
    int longitud,i,mayor = 0,menor;
    int vector[longitud];

    printf("Ingrese la longitud del vector \n");
    scanf("%d", &longitud);
    for(i = 0;i < longitud;i++){
        printf("Ingrese un numero en la posicion %d \n",i);
        scanf("%d", &vector[i]);
        if(vector[i] > mayor){
            mayor = vector[i];
        }
        if(vector[i] < menor){
            menor = vector[i];
        }
    }
    printf("El menor es %d y el mayor es %d \n", menor,mayor);

    return 0;
}
