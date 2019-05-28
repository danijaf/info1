#include <stdio.h>

int main (void){

	int num1;
	int num2;
	int sum;
	int res;
	int div;
	int prod;

	printf("Por favor ingrese el primer numero\n");

	scanf("%d",&num1);

	printf("Por favor ingrese el segundo numero\n");

	scanf("%d",&num2);

	sum=num1+num2;
	res=num1-num2;
	div=num1/num2;
	prod=num1*num2;

	printf("Realizamos los calculos correspondientes con los numeros %d y %d\n",num1,num2);
	printf("Los resultados son:\n");
	printf("Suma:%d \n",sum );
	printf("Resta:%d \n",res );
	printf("Division:%d \n",div);
	printf("Producto:%d \n",prod);

}