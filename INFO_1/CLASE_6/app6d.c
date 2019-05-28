// 6d) Realizar un programa que cuente los números del 1 al 10. Imprimirlos en forma ascendente y luego en forma descendente.


#include <stdio.h>

int main(void)
{

	int num = 1;

	printf("ASCENDENTE\n");

	while(num<=10){
		printf("%d\n",num );
		num++;
	}
	num--;
	printf("DESCENDENTE\n");
	while(num>=0){
		printf("%d\n",num );
		num--;
	}




	return 0;
}