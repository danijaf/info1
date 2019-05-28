/*7d) Realizar un programa que mediante dos funciones distintas, calcule el área y el perímetro de un círculo. 
El valor del radio no puede ser negativo ni mayor a 100. La validación de datos se realiza dentro de las funciones.
Imprimir las leyendas que crea necesarias. Prototipos: float area(float radio)    float perimetro(float radio)
*/

#include <stdio.h>

#define pi 3.1419

float area(float radio);    
float perimetro(float radio);
float pedirEntero(void);
float exponente (float base, int exp);


int main(void){

	float radio;

	radio=pedirEntero();

	printf("AREA = %f\nPERIMETRO = %f \n",area(radio),perimetro(radio) );

	return 0;
}



/*=========================PEDIR ENTERO=========================*/
float pedirEntero(void){

	float numEntero;

	printf("Por Favor ingrese el valor del radio\n");
	scanf("%f",&numEntero);

	return numEntero;
}


/*===========================EXP================================*/

float exponente (float base, int exp){

	for (int i = 1; i < exp; i++)
	{
		base=base*base;
	}
	return base;
}


/*===========================AREA================================*/

float area(float radio){

	if (radio>0 && radio<100)
	{
		float area = (exponente(radio,2)*pi);
		return area;
		
	}else{
		printf("Error, el valor del radio no esta dentro de los valores correctos\n");
		return -1;
	}

}

/*===========================PERIMETRO============================*/

float perimetro(float radio){

	if (radio>0 && radio<100)
	{
		float perimetro = (radio*2)*pi;
		return perimetro;
		
	}else{
		printf("Error, el valor del radio no esta dentro de los valores correctos\n");
		return -1;
	}

}
