/*6f) Mejorar el programa anterior para que las notas se encuentren en un rango válido (1-10).
 Volver a pedir una nota cuando se encuentre fuera del rango, notificando el error por pantalla.
  Tener en cuenta que el programa no finaliza hasta tener 10 notas válidas.
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
					
			if (nota<10 && nota>0)
			{	
				total= total+nota;
				alumnos++;
			}else{
				printf("***La nota no puede ser mayor a 10 ni menor a 1***\n");
			}
	

	}	

	promedio=total/alumnos;
	printf("EL promedio es %f\n",promedio );



	return 0;
}