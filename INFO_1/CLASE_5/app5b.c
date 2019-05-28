/*5b) Realizar un programa que le pida al usuario dos números y imprima por pantalla si son iguales o distintos, y cuál 
es el mayor y cuál el menor.*/

#include<stdio.h>

int main (void)
{

int a;
int b;


	printf("Ingrese el numero A\n");
	scanf("%d",&a);


	printf("Ingrese el numero B\n");
	scanf("%d",&b);


if (a==b){
	printf("AMBOS NUMEROS SON IGUALES\n");
}else {
	printf("LOS NUMEROS SON DISTINTOS\n");
	if (a>b){
	printf("A es mayor que B\n");
	}else{
	printf("B es mayor que A\n");
}
}

return 0;
}
