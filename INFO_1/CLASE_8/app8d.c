/*
8d) Tomar el ejercicio de cálculo de perímetro y área de un círculo y modificarlo para que el valor del radio se pase por referencia a la función. 

El prototipo sería: float perimetro( float* radio );
*/


#include <stdio.h>
#include <math.h>

#define pi 3.1419

float perimetro (float *radio);
float area (float *radio);

int main(void){
	float rad;
	float *radio=&rad;
	float peri2;
	float area2;

do{	
	printf("\n***INGRESE UN VALOR DEL RADIO POSITIVO***\n");
	scanf("%f",&rad);

	if(rad>0){

			printf("***EL VALOR DEL RADIO ES= %f ***\n",rad );

				 peri2 = perimetro(radio);
				 area2 = area(radio);

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



float perimetro (float *radio){

	float perimetro = ((*radio) *2)*pi;
	return perimetro;

}

float area (float *radio){

	float area = (*radio * *radio)*pi;
	return area;

}