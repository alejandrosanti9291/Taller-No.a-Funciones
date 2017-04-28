/*
Programa: Crear una plantilla llamada maximo()  que devuelva el valor de tres argumentos que se transmitan  a la funcion  cuando sea llamada
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Crear una plantilla llamada maximo()  que devuelva el valor de tres argumentos que se transmitan  a la funcion  cuando sea llamada
*/

#include<stdio.h>
#include<conio.h>

template <class TIPOD>
TIPOD maximo(TIPOD dat1, TIPOD dat2, TIPOD dat3);

int main(){

	char dat1='e';
	char dat2='f';
	char dat3='a';

	printf("El maximo valor es: %c ", maximo(dat1,dat2,dat3));

	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD dat1, TIPOD dat2, TIPOD dat3){

	TIPOD max;

	if((dat1 > dat2) && (dat1 > dat3)){
		max = dat1;
	}
	else{
		 if((dat2>dat1) && (dat2>dat3)){
			max = dat2;
		}
		else{
			max = dat3;
		}
	}
	return max;
}
