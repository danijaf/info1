/*
3a) Realizar un programa que utilice la sentencia sizeof() para informar el tamaño de las variables 
char, short, int. 
3b) Realizar un programa que cree una variable char (signada) e ir variando su contenido (valor). 
Imprimir su valor por pantalla y analizar cómo se almacena en memoria. 
Probar con valores que se encuentren por fuera del rango dinámico de representación correspondiente 
al char. 
3c) Idem 3b) pero con una variable unsigned char. 
* Utilizar el modificador %X en el printf para observar la forma en que realmente se encuentra 
almacenado el valor en memoria.
3d) Analizar el funcionamiento y uso de la función scanf(...) para la semana que viene.
*/

#include <stdio.h>

int main (void){

//3a
	char var1=0;
	char *var1x = &var1;
	int var2=0;
	short var3=0;
	unsigned char var4=0;
	unsigned char *var4x=&var4;

	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
	printf ("TAMAÑO DE LA VARIABLE INT = %lu\n",sizeof(var2));
	printf ("TAMAÑO DE LA VARIABLE SHORT = %lu\n",sizeof(var3));
printf("=====================================================================\n");
//3b
	
	printf("VALOR EN HEXA CON CHAR=0 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");
	var1= 10;
	printf("VALOR EN HEXA CON CHAR=10 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");
	var1= -10;
	printf("VALOR EN HEXA CON CHAR=-10 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");
	var1= 128;
	printf("VALOR EN HEXA CON CHAR=128 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");
	var1= 127;
	printf("VALOR EN HEXA CON CHAR=127 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");
	var1= -128;
	printf("VALOR EN HEXA CON CHAR=-128 // %x\n",var1 );
	printf("VALOR = %d\n",var1 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var1x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var1));
printf("=====================================================================\n");

//3c
	printf("VALOR EN HEXA CON uCHAR=0 //  %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");
	var4= 10;
	printf("VALOR EN HEXA CON uCHAR=10 //  %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");
	var4= -10;
	printf("VALOR EN HEXA CON uCHAR=-10 //  %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");
	var4= 255;
	printf("VALOR EN HEXA CON uCHAR=255 //  %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");
	var4= 256;
	printf("VALOR EN HEXA CON uCHAR=256 //   %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");
	var4= -1;
	printf("VALOR EN HEXA  CON uCHAR=-1 //  %x\n",var4 );
	printf("VALOR = %d\n",var4 );
	printf("POSICION EN MEMORIA DE LA VARIABLE CHAR // %p\n",var4x);
	printf ("TAMAÑO DE LA VARIABLE CHAR = %lu\n",sizeof(var4));
printf("=====================================================================\n");

//3d
	//La funcion Scanf() sirve para leer lo que se ingrese por teclado y almacenarlo en una posicion
	//de memoria.
	

	printf("INGRESAR UN CARACTER:\n");

	scanf("%c",&var4);

	printf("EL CARACTER INGRESADO ES: %c\n", var4);
	printf("SU VALOR COMO DECIMAL: %d\n", var4);
	printf("SU VALOR COMO HEXADECIMAL: %x\n", var4);
	printf("SU TAMAÑO: %lu\n", sizeof(var4));

	return(0);
}