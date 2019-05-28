/*5c) Realizar un programa que calcule el índice de masa corporal [ IMC = Peso / Altura^2 ] e indique por pantalla en qué 
rango se encuentra esa persona. 
Los rangos posibles son 
1) Deficit Alimenticio (IMC < 18,4).
2) Normal (18,5 < IMC < 24,9).
3) Sobrepeso (25 < IMC < 29,9).
4) Obesidad (IMC > 30). */

#include<stdio.h>

int main (void)
{

float peso;
float altura;
float IMC;
int VAR;


	printf("Ingrese el PESO en kg\n");
	scanf("%f",&peso);


	printf("Ingrese LA ALTURA en m\n");
	scanf("%f",&altura);

	IMC = peso/(altura*altura);

	printf("EL IMC ES: %f\n",IMC );

	if (IMC<=18.4){
		printf("Deficit Alimenticio\n");
	}else if (18.4<IMC && IMC<=24.9){
		printf("Normal\n");
	}else if (24.9<IMC && IMC<=29.9){
		printf("Sobrepeso\n");
	}else if (IMC>30){
		printf("Obesidad\n");
	}else{
		printf("El valor de IMC es erroneo, revise los datos ingresados\n");
	}

return 0;


}