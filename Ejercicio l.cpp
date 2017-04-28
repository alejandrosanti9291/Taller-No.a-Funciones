/*
Nombre: Realize una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector.
Autor: Alejandro Santibañez Sanchez
Fecha: 27/04/2017
Resumen: Realize una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector.
*/
#include<stdio.h>

void PedirDatos();
void CambioDeSigno(int A[],int);
void MostrarVector(int A[],int);


int tamano,A[100];

int main(){

	PedirDatos();
	CambioDeSigno(A,tamano);
	MostrarVector(A,tamano);

	return 0;
}

void PedirDatos(){

	printf("Digite el tamanio del vector: ");
	scanf("%d",&tamano);

	for(int i=0;i<tamano;i++){
		printf("\nPosicion %d: ",i+1,". Digite un numero: ");
		scanf("%d",&A[i]);
	}
}

void CambioDeSigno(int A[],int tamano){
	for(int i=0;i<tamano;i++){
		A[i] *= -1;
	}
}

void MostrarVector(int A[],int tamano){
	printf("\nMostrando vector con cambio de signo: ");
	for(int i=0;i<tamano;i++){
		printf("%d ",A[i] ," ");
	}
}
