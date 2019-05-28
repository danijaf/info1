/*7e) Realizar un programa que calcule el valor máximo de una serie de números. El programa se ejecuta en forma continua 
pidiendo datos al usuario hasta que se ingrese 0, valor que no se considerará válido y terminará la ejecución del programa, 
mostrando previamente cuál fue el máximo valor de todos los ingresados. Prototipo: int maximo (void)*/


#include <stdio.h>
int Maximo(void);

int main(void){

int numMayor;

numMayor=Maximo();
printf("%d\n", numMayor);

	return 0;
}


int Maximo(void){
	int num2=1;
	int num1=1;
	while(num1 != 0){

		printf("INGRESE UN NUMERO ENTERO:\n");
		scanf("%d",&num1);
		if (num1>num2)
		{
			num2=num1;

		}else{
			num1=num1;
		}
	}
	return num2;
}