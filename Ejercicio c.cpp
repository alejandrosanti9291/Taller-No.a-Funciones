/*
Programa: Cree un arreglo llamado primos, que almacene sólo los números primos que el usuario ingrese desde el teclado. Arreglo de 5 posiciones.
Autor: Alejandro Santibañez Sanchez
Fecha: 23/03/2017
Resumen: Crear arreglo de 5 posiciones llamado primos, que almacene solo numeros primos que el usuario ingrese.
*/

#include<stdio.h>

int main(){
    int l=5,i=0,num,d=0;
    int primos[l];

    while(i < l){
            printf("Ingrese un numero \n");
            scanf("%d", &num);
           if(num % i == 0){
                d +=1;
           }
           if(d < 2){
                break;
           }
           if(i >= num){
                break;
           }
           i += 1;
        if(d == 2){
            scanf("%d", &primos[i]);
        }
    }
    for(i = 0;i < l;i++){
        printf("%d", primos[i]);
    }

    return 0;
}
