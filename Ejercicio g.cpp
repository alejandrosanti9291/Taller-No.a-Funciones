/*
Programa: Escribe una funcion llamada cambio() que tenga un parametro en numero entero y seis parametros de referencia un numero entero nombrado cien, cincuenta, veinte, diez, cinco y uno respectivamente.
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Escribe una funcion llamada cambio() que tenga un parametro en numero entero y seis parametros de referencia un numero entero nombrado cien, cincuenta, veinte, diez, cinco y uno respectivamente.
 */

#include<stdio.h>

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int num,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

	printf("Digite un numero \n");
	scanf("%d", &num);
	cambio(num,cien,cincuenta,veinte,diez,cinco,uno);

	printf("Cantidad de billetes a entregar: \n\n" );
	printf("Cien: %d \n",cien);
	printf("Cincuenta: %d \n",cincuenta);
	printf("Veinte: %d \n",veinte);
	printf("Diez: %d \n",diez);
	printf("Cinco: %d \n",cinco);
	printf("Uno: %d \n",uno);

	return 0;
}

void cambio(int num,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = num/100;
	num %= 100;
	cincuenta = num/50;
	num %= 50;
	veinte = num/20;
	num %= 20;
	diez = num/10;
	num %= 10;
	cinco = num/5;
	uno = num%5;
}
