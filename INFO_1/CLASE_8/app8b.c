/*8b) Tomar el ejercicio 7b) de la clase 07 y modificarlo para que los valores (argumentos) que recibe la función suma/resta 
se pasen por referencia. 

Prototipo: int sumar ( int* var1, int* var2); 

*/


#include <stdio.h>

int pedirEntero();
int suma(int *var1, int *var2);
int resta(int *var1, int *var2);

int main(void){
	int v1;
	int v2;
	int *val1=&v1;//paso los valores por referencia
	int *val2=&v2;



	v1 = pedirEntero();
	v2 = pedirEntero();



	printf("SUMA = %d\n",suma(val1,val2));
	printf("RESTA = %d\n",resta(val1,val2));

	printf("Puntero VAL1 Posicion: %p VALOR= %d\n",&val1,*val1);
	printf("Puntero VAL2 Posicion: %p VALOR= %d\n",&val2,*val2);

	v1 = pedirEntero();//pido los valores y los agrego
	v2 = pedirEntero();


	printf("SUMA = %d\n",suma(val1,val2));
	printf("RESTA = %d\n",resta(val1,val2));


	printf("Puntero VAL1 Posicion: %p VALOR= %d\n",&val1,*val1);
	printf("Puntero VAL2 Posicion: %p VALOR= %d\n",&val2,*val2);
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
int suma(int *s1,int *s2){

	int sumado;

	sumado=*s1+*s2;

	return sumado;
}
/*========================================================================================================*/
int resta(int *r1,int *r2){

	int restado;

	restado=*r1-*r2;

	return restado;
}