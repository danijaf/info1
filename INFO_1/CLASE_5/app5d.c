/*5d) Realizar un programa que permita el ingreso de los lados de un triángulo y imprima si es Equilátero, Isósceles 
o Escaleno. 
Mejorar el programa logrando que los valores ingresados sean únicamente positivos. En caso contrario, informar 
el error y terminar el programa.*/

#include <stdio.h>
#include <math.h>

int main (void){

	float lado1;
	float lado2;
	float lado3;

printf("INGRESE EL VALOR PARA EL LADO1 DEL TRIANGULO A ANALIZAR\n");
scanf ("%f",&lado1);

printf("INGRESE EL VALOR PARA EL LADO2 DEL TRIANGULO A ANALIZAR\n");
scanf ("%f",&lado2);

printf("INGRESE EL VALOR PARA EL LADO3 DEL TRIANGULO A ANALIZAR\n");
scanf ("%f",&lado3);

if(lado1 > 0 && lado2 > 0 && lado3 > 0){
	if (lado1 == lado2 && lado2 == lado3)
	{
		printf("EL TRIANGULO ES EQUILATERO\n");

	}else if ((lado1 == lado2 || lado1 == lado3 || lado2 == lado3) && (lado1 != lado2 || lado1 !=lado3 || lado2 != lado3))		
	{			
		printf("EL TRIANGULO ES ISOSCELES\n");

	}else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
	{
		printf("EL TRIANGULO ES ESCALENO\n");

	}else{
		printf("ERROR\n");
	}


}else{
	printf("ERROR, EL VALOR DE LOS LADOS NO PUEDE SER MENOR A 0\n");
}



	return 0;
}