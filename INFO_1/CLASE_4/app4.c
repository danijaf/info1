/*

4a) Realizar un programa que calcule el perímetro y el área de un círculo. Utilizar la sentencia #define para definir 
el Radio y la constante PI. Imprimir ambos resultados en formato decimal, hexadecimal y real. 
Analizar los resultados por pantalla según cada formato.   

4b) Idem punto 4a pero pidiendo el valor del radio por teclado. Permitir el ingreso de valores reales. 
tilizar el "casteo" para la conversión explícita de resultados. 

4c) Idem 4b pero incluyendo una sentencia de control de flujo (condicional) que no permita el ingreso de valores de 
radio negativo. Informar por pantalla en caso de error y salir del programa. 

4d) Realizar un programa que se le ingrese el valor de una temperatura en grados Celsius (°C) y haga la conversión a 
grados Fahrenheit (°F). Luego de la conversión anterior, el programa nuevamente pide al usuario el ingreso de un número 
en grados Fahrenheit y realiza la conversión a grados Celsius. Permitir únicamente el ingreso de valores entre [-100°; +100] 
para °C. y el mismo rango dinámico equivalente para el caso del ingreso en grados Fahrenheit.

*/

#include <stdio.h>
#include <math.h>

#define pi 3.1419
#define rad 20.0


int main (void){


//4a
	float perimetro = (rad * 2)* pi;
	float area = (rad*rad)*pi;
	float radio;
	float peri2;
	float area2;
	float Celsius;
	float Fahrenheit;
	
printf("***************************4a**********************************\n\n");
printf("VALOR DE PI= %f \n", pi);
printf("VALOR DE RADIO= %f\n", rad );

printf("EL VALOR DEL PERIMETRO EN DECIMAL ES: %d\n",(int)perimetro);
printf("EL VALOR DEL PERIMETRO EN HEXADECIMAL ES: %x\n",(int)perimetro);
printf("EL VALOR DEL PERIMETRO EN REALES ES: %f\n",perimetro);
printf("===============================================================\n");
printf("EL VALOR DEL AREA EN DECIMAL ES: %d\n",(int)area);
printf("EL VALOR DEL AREA EN HEXADECIMAL ES: %x\n",(int)area);
printf("EL VALOR DEL AREA EN REALES ES: %f\n",area);


//4b
printf("***************************4b/c********************************\n\n");

printf("INGRESE EL VALOR DEL RADIO\n");

scanf("%f",&radio);

if(radio>=0){

printf("EL VALOR DEL RADIO ES= %f \n",radio );

	 peri2 = (radio * 2)* pi;
	 area2 = (radio*radio)*pi;

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


printf("***************************4d********************************\n\n");


//°C=5/9.(F°-32)
printf("INGRESE VALOR EN GRADOS CELSIUS\n");
scanf("%f",&Fahrenheit);

if((-100.0)<Fahrenheit<100.0){

Celsius= ((5.0/9.0)*(Fahrenheit-32));

printf("El valor ingresado es: %f°C\n",Fahrenheit );
printf("El valor convertido es: %f°F\n",Celsius );
}else{
	printf("EL VALOR NO SE ENCUENTRA DENTRO DE LOS PARAMETROS ESTIMADOS\n");
}


printf("===============================================================\n");

//°F=°C/(5/9)+32
printf("INGRESE VALOR EN GRADOS CELSIUS\n");
scanf("%f",&Celsius);

if((-100.0)<Celsius<100.0){

Fahrenheit= (Celsius / (5.0/9.0)) + 32;

printf("El valor ingresado es: %f°C\n",Celsius );
printf("El valor convertido es: %f°F\n",Fahrenheit );
}else{
	printf("EL VALOR NO SE ENCUENTRA DENTRO DE LOS PARAMETROS ESTIMADOS\n");
}







return 0;

}