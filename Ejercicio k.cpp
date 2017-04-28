/*
Nombre: Realice una funcion que tome como parametros  un vector  y su tamaño  y diga si el vector  esta ordenado crecientemente.
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Realice una funcion que tome como parametros  un vector  y su tamaño  y diga si el vector  esta ordenado crecientemente.
*/

#include<stdio.h>

void PedirDatos();
void OrdenVector(int Arreglo[],int);

int Arreglo[100],tamano;

int main(){

	PedirDatos();
	OrdenVector(Arreglo,tamano);

	return 0;
}

void PedirDatos(){

	printf("Digite el tamaño del vector: ");
	scanf("%d",&tamano);

	for(int i=0;i<tamano;i++){
		printf("%d",i+1,". Digite un numero: ");
		scanf("%d",&Arreglo[i]);
	}
}

void OrdenVector(int vec[],int tamano){

	char bandera = 'F';

	int i=0;
	while((bandera == 'F') && (i < tamano-1)){
		if(Arreglo[i]>Arreglo[i+1]){
			bandera = 'V';
		}
		i++;
	}

	if(bandera == 'F'){
		printf("\nEl arreglo esta ordenado en forma creciente");
	}
	else{
		printf("\nEl arreglo NO esta ordenado");
	}
}
