/*6g) Tomar el ejercicio 4c) de cálculo de área y perímetro. Pedir el ingreso del radio al usuario de forma
 indefinida hasta que ingrese un valor
positivo y menor a 10. Imprimir leyenda indicando cada vez que se ingresa un valor inválido. 
Imprimir el resultado en caso válido.
*/




#include <stdio.h>
#include <math.h>

#define pi 3.1419

int main(void){

	float radio;
	float peri2;
	float area2;

do{	
	printf("INGRESE UN VALOR DEL RADIO POSITIVO Y MENOR A 10\n");
	scanf("%f",&radio);

}while(radio>10 || radio<0);


	if(radio){

			printf("EL VALOR DEL RADIO ES= %f \n",radio );

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
		printf("EL VALOR NO ES ADECUADO.\n");
	}

	return 0;
}