/*6e) Ingresar por teclado los valores correspondientes a diez notas de asignaturas. Calcular el promedio de dichas 
notas e imprimirlo.
*/


#include <stdio.h>

int main(void){

float alumnos=0;
float nota=0;
float total=0;
float promedio;
	
	while(alumnos<10){
		printf("INGRESE EL VALOR DE LA NOTA\n");
		scanf("%f",&nota);
		total= total+nota;
		alumnos++;

	}	

	promedio=total/alumnos;
	printf("EL promedio es %f\n",promedio );



	return 0;
}