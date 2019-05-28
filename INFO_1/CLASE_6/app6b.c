/*6b) Realizar un programa que permita el ingreso de un caracter e imprima una de las siguientes leyendas según 
corresponda: "MAYUSCULA", "minuscula", "numero", "otro caracter". Utilizar formato "%c" para el ingreso de datos.
*/

#include <stdio.h>

int main(void){

char var1;
int var2;
int var3='A';
int var4='Z';
while(1){
printf("INGRESE UN CARACTER\n");
scanf("%c",&var1);
getchar(); //para que no tome el enter el while
var2=var1; //lo igualo para obtener el valor del char en formato int para poder comparar con ascii


	if ('A'<=var1 && var1<='Z')
	{
		printf("EL CARACTER %c ES UNA MAYUSCULA\n",var1 );
	}else if ('a'<=var1 && var1<='z')
	{
		printf("EL CARACTER %c ES UNA minuscula\n",var1 );
	}else if ('0'<=var1 && var1<='9')
	{
		printf("EL CARACTER %c ES UN NUMERO\n",var1 );
	}else {
		printf("EL CARACTER %c ES UN CARACTER ESPECIAL\n",var1 );
	}



}


	return 0;
}