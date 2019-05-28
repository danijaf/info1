/*6h) Mejorar el programa anterior 6d) para que el mismo finalice únicamente cuando el
 usuario ingresa como radio el valor 0.
*/

#include <stdio.h>
#include <math.h>

#define pi 3.1419

int main(void){

	float radio;
	float peri2;
	float area2;

do{	
	printf("\n***INGRESE UN VALOR DEL RADIO POSITIVO***\n");
	scanf("%f",&radio);

	if(radio>0){

			printf("***EL VALOR DEL RADIO ES= %f ***\n",radio );

				 peri2 = (radio * 2)* pi;
				 area2 = (radio*radio)* pi;

			printf("===============================================================\n");
			printf("EL VALOR DEL PERIMETRO EN DECIMAL ES: %d\n",(int)peri2);
			printf("EL VALOR DEL PERIMETRO EN HEXADECIMAL ES: %x\n",(int)peri2);
			printf("EL VALOR DEL PERIMETRO EN REALES ES: %f\n",peri2);
			printf("===============================================================\n");
			printf("EL VALOR DEL AREA EN DECIMAL ES: %d\n",(int)area2);
			printf("EL VALOR DEL AREA EN HEXADECIMAL ES: %x\n",(int)area2);
			printf("EL VALOR DEL AREA EN REALES ES: %f\n",area2);
	}else{
		printf("\n***EL VALOR NO ES ADECUADO.***\n");
	}
}while(radio!=0);

printf("****!!!!EL PROGRAMA FINALIZO!!!!****\n");

	return 0;
}