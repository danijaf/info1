//14-05-19

//1-Cual es el rango dinamico de representacion de una variable de 1 byte
	//RTA:8 bits MAL
//Depende del sistema de representacion, si es signado de -128 a 127 y si es unsigned es de 0 a 255



//2-Indicar que se veria por pantalla en el siguiente codigo:

#include <stdio.h>

int main(void){

	int var=50;


	printf("a) VARIABLE = %d = %x = %o \n",var,var,var ); //50-32-62
	printf("a) VARIABLE = %f \n",var );						//numero extraño	
	printf("a) VARIABLE = %f \n",(float)var );				//50.000000 usando casteo


//3-En cual de las lineas de codigo anterior el compilador tira un warning?
	//RTA: en la linea printf("a) VARIABLE = %f \n",var ); POR QUE PASO UN INT A FLOAT SIN CASTEO

//4-Describir el proceso para crear un programa en C utilizando la consola de linux
	//RTA: metodo rapido, en la carpeta donde tengo guardado el codigo, ejecutamos:
	//gcc programa.c -o programa

	//metodo para sacar un archivo.o: 
	// gcc -c programa.c -o programa.o
	// gcc programa.o -o programa

 
//5-Indicar que se veria por pantalla en el siguiente codigo

int a = 50;
int b = 15;

if (!(a==b))
{
	printf("1) Division = %d = %f \n", a/b, (float)(a/b));
}else{
	printf("2) Division = %d = %f \n", b/a, (float)(b/a));
}

if (a=b)//esto es una asignacion por lo cual va a el if e iguala a al valor de b
{
	printf("3) son IGUALES\n");
}else{
	printf("4) son Distintos\n");
}

if (a=b)
{
	printf("5) Division = %d = %f \n", a/b, (float)(a/b));
}else{
	printf("6) Division = %d = %f \n", b/a, (float)(b/a));
}

if (!(a==b))
{
	printf("7) son IGUALES\n");
}else{
	printf("8) son Distintos\n");
}



	return 0;
}