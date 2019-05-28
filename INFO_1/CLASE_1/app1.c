/*primer programa
codigo fuente*/

#include <stdio.h>//libreria standart input & output

int main (void)//SIEMPRE se arranca a ejecutar desde el main
{
	printf("\n*** HOLA MUNDO ***\n");
	return(0);//retorno de valor basado en el valor del main #int = numero entero

}


/*
+Guardar como .c

+Compilar
gcc -c hola.c -o hola.o -Wall	|.o **revisa sintaxis(.object) | -Wall **mostrar todos los warning  ->COMPILAR
gcc hola.o -o hola 																					->LINKEAR

+ejecutar 																							->EJECUTAR
./hola


*/