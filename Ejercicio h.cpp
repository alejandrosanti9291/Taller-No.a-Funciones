/*
Programa: Escriba uan funcion nombrada tiempo()  que tenga un parametro en numero entero llamado totalseg y tres parametros de referencia enteros nombrados horas,min,segundo.
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Escriba uan funcion nombrada tiempo()  que tenga un parametro en numero entero llamado totalseg y tres parametros de referencia enteros nombrados horas,min,segundo.
*/

#include<stdio.h>

void tiempo(int,int&,int&,int&);

int main(){
	int SegundosTotales,horas,minutos,segundos;

	printf("Digita la cantidad de segundos: \n");
	scanf("%d",&SegundosTotales);

	tiempo(SegundosTotales,horas,minutos,segundos);

	printf("\nHoras: %d \n",horas);
	printf("Minutos: %d \n",minutos);
	printf("Segundos: %d \n",segundos);

	return 0;
}

void tiempo(int SegundosTotales,int& horas,int& minutos,int& segundos){
	horas = SegundosTotales/3600;
	SegundosTotales %= 3600;
	minutos = SegundosTotales/60;
	segundos = SegundosTotales%60;
}

