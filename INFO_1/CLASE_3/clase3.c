/*CLASE 3*/


#include<stdio.h>

int main (void){

	printf("%lu \n",sizeof(char));
	

	char var1=64; 
	/*Este es el valor maximo para un char. si lo subo se rompe...
	al ser signado nos da -1 si lo pongo como signado da 255*/

	printf("%c \n",var1);	//imprime el caracter 
	printf("%d \n",var1); 	//imprime el valor del char
	printf("%lu \n",sizeof(var1));	//imprime el sizeof de la var1
	printf("%x \n",var1);	//imprime el valor hexa de la var1


	



	return(0);
}

     