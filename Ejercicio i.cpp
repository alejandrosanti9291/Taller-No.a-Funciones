/*
Programa: Escriba una funcion nombrada calc_anos()  que tenga un parametro  entero que represente el numero total de dias  desde la fecha 1/1/2000 y parametros de referencia nombrados años,mes y dia.
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Escriba una funcion nombrada calc_anos()  que tenga un parametro  entero que represente el numero total de dias  desde la fecha 1/1/2000 y parametros de referencia nombrados años,mes y dia.
*/

#include<stdio.h>

void Calc_Anos(int,int&,int&,int&);

int main(){
	int TotalDias,Ano,Mes,Dia;

	printf("Ingrese el numero de dias: \n ");
	scanf("%d", &TotalDias);

	Calc_Anos(TotalDias,Ano,Mes,Dia);

	printf("Fecha Actual: %d/%d/%d  ",Dia+1,Mes+1,Ano+2000);

	return 0;
}

void Calc_Anos(int TotalDias,int& Ano,int& Mes,int& Dia){
	Ano = TotalDias/365;
	TotalDias %= 365;
	Mes = TotalDias/30;
	Dia = TotalDias%30;
}

