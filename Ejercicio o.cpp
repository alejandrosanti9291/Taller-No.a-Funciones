/*
Programa: Realize una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los elementos alamcenados en dicha fila
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Realize una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los elementos alamcenados en dicha fila
*/

#include <stdio.h>
#include <stdlib.h>
#define lon 3

void menu();
void llenarMatriz(int [lon][lon]);
void mostrarMatriz(int [lon][lon]);
void menorFilaMatriz(int [lon][lon]);

int main(){
    menu();
    return 0;
}

void menu(){
    int opcion, cont = 0;
    int matriz[lon][lon];
    do{
        printf("\n---MENU---\n");
        printf("\n1. Llenar Matriz");
        if(cont > 0){
            printf("\n2. Mostrar Matriz");
            printf("\n3. Menor Fila Matriz");
        }
        printf("\n0. Salir");
        printf("\nIngrese Valor de la Opcion: ");
        scanf("%d", &opcion);
        if(cont > 0){
            switch(opcion){
            case 1: llenarMatriz(matriz);
                cont++;
                break;
            case 2: mostrarMatriz(matriz);
                break;
            case 3: menorFilaMatriz(matriz);
                break;
            case 0: exit(0);
                break;
            default: printf("\nNo es una opcion valida \n");
                break;
            }
        }else{
            switch(opcion){
            case 1: llenarMatriz(matriz);
                cont++;
                break;
            case 0: exit(0);
                break;
            default: printf("\nNo es una opcion valida \n");
                break;
            }
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void llenarMatriz(int matriz[lon][lon]){
    int f, c;
    for(f = 0; f < lon; f++){
        for(c = 0; c < lon; c++){
            printf("\nIngrese un valor: ");
            scanf("%d", &matriz[f][c]);
        }
    }
    printf("\nMatriz llenada con exito\n");
}
void mostrarMatriz(int matriz[lon][lon]){
    fflush(stdin);
    int f, c;
    for(f = 0; f < lon; f++){
        for(c = 0; c < lon; c++){
            printf("%d   ", matriz[f][c]);
        }
        printf("\n");
    }
    printf("\nMatriz impresa con exito\n");
}
void menorFilaMatriz(int matriz[lon][lon]){
    int c, fila, menor;
    printf("\nIngrese el numero de la fila: ");
    scanf("%d", &fila);
    if(fila < lon){
        menor = matriz[fila][0];
        for(c = 1; c < lon; c++){
            if(matriz[fila][c] < menor){
                menor = matriz[fila][c];
            }
        }
    }else{
        printf("\nNo es una fila valida\n");
        menorFilaMatriz(matriz);
    }
    fflush(stdin);
    printf("\nEl menor valor de la fila es %d\n", menor);
    mostrarMatriz(matriz);
}
