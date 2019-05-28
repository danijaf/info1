/*
7b) Crear un par de funciones que realicen las operaciones de suma y resta. Ambas reciben dos operandos enteros. 
Utilizar la función del punto 7a para pedir los datos. Los prototipos son:  int suma(int, int)    int resta(int, int)
*/


#include <stdio.h>

int pedirEntero();
int suma(int,int);
int resta(int,int);

int main(void){

	int val1;
	int val2;



	val1 = pedirEntero();
	val2 = pedirEntero();


	printf("SUMA = %d\n",suma(val1,val2));
	printf("RESTA = %d\n",resta(val1,val2));



	return 0;
}



/*========================================PEDIR ENTERO===================================================*/
int pedirEntero(void){

	int numEntero;

	printf("Por Favor ingrese un numero entero\n");
	scanf("%d",&numEntero);

	return numEntero;
}
/*========================================================================================================*/

/*================================================SUMAR===================================================*/
int suma(int s1,int s2){

	int sumado;

	sumado=s1+s2;

	return sumado;
}
/*========================================================================================================*/

/*===============================================RESTAR===================================================*/
int resta(int r1,int r2){

	int restado;

	restado=r1-r2;

	return restado;
}
/*========================================================================================================*/