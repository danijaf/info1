
//funcion main

//int tipo de devolucion
	//main=funcion principal
		//(void)= parametro vacio, no recibe parametro
#include <stdio.h>
#include <math.h>

/*	PROTOTIPO - 
Ingreso los encabezados para poder llamar a las 
funciones sin necesidad de escribirla arriba del "main"*/
int ingresar(); 
char validar(int);

/*El LINKER es el que se encarga de ir a las posiciones de memoria de las funciones 
y de volver a donde paro la ejecucion*/

/*===========================================================================================*/

int main(void){	//ENCABEZADO DE LA FUNCION

	/*AMBITO O SCOPE ES TODO LO QUE ESTA ENTRE LAS LLAVES DE LA FUNCION*/

	int valor;
	valor = ingresar();		//llamo a la funcion ingresar()

	validar(valor);			//llamo a la funcion y le paso el la variable de entrada





	return 0; //return 0 = final normal de ejecucion
}

/*===========================================================================================*/

/*****************************************************************************************
CADA VEZ QUE LLAMO A LA FUCION ESTA SE ALMACENA EN LA PILA (UN AREA DE MEMORIA CONTIGUA)
SU TAMAÑO DEPENDE DEL SISTEMA OPERATIVO.
PARA GUARDAR DATOS EL SISTEMA USA "PUSH" Y PARA SACARLOS USA "POP"
******************************************************************************************/

/*========================================================================================*/

//Funcion aparte para ingresar datos
int ingresar(){
	int numero;
	printf("INGRESE UN ENTERO\n");
	scanf("%d",&numero);
	return numero;
}
/*=========================================================================================*/

//funcion validar
char validar(int num){ //uso char para usarlo como valor booleano 1=true 0=false

	if (num>=0)
	{
		return 1;	
	}else{
		return 0;
	}


}
/*=========================================================================================*/