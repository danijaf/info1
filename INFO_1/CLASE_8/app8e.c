/*8e) Tomar el ejercicio 8d) y modificarlo para que el resultado sea almacenado en un nuevo parámetro pasado por referencia. 
La función no devuelve nada. El prototipo de la función sería: void perimetro (float *radio, float *res);

*/#include <stdio.h>
#include <math.h>

#define pi 3.1419

void perimetro (float *radio, float *res);
void area (float *radio, float *res);

int main(void){
	float rad;
	float *radio=&rad;

	float resultado =0;
	float *res=&resultado;

do{	
	printf("\n***INGRESE UN VALOR DEL RADIO POSITIVO***\n");
	scanf("%f",&rad);

	if(rad>0){

			printf("***EL VALOR DEL RADIO ES= %f ***\n",rad );

				 perimetro(radio,res);
				
			printf("===============================================================\n");
			printf("EL VALOR DEL PERIMETRO EN DECIMAL ES: %d\n",(int)*res);
			printf("EL VALOR DEL PERIMETRO EN HEXADECIMAL ES: %x\n",(int)*res);
			printf("EL VALOR DEL PERIMETRO EN REALES ES: %f\n",*res);

				 area(radio,res);
			printf("===============================================================\n");
			printf("EL VALOR DEL AREA EN DECIMAL ES: %d\n",(int)*res);
			printf("EL VALOR DEL AREA EN HEXADECIMAL ES: %x\n",(int)*res);
			printf("EL VALOR DEL AREA EN REALES ES: %f\n",*res);
	}else{
		printf("\n***EL VALOR NO ES ADECUADO.***\n");
	}
}while(rad!=0);

printf("****!!!!EL PROGRAMA FINALIZO!!!!****\n");

	return 0;
}



void perimetro (float *radio, float *res){

	*res = ((*radio) *2)*pi;
	return;

}

void area (float *radio, float *res){

	*res = (*radio * *radio)*pi;
	return;

}