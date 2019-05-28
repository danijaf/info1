/*8a) Crear un programa que pida al usuario una variable entera y una tipo caracter. Mostrar por pantalla 
el la dirección de memoria donde se almacena cada variable y su contenido en formato decimal y hexadecimal. 
Luego crear dos punteros (uno para cada variable), mostrando su dirección de memoria donde se almacenan y su contenido. 
Finalmente volver a pedir nuevos valores para las variables y verificar la modificación mediante punteros. 

*/


#include <stdio.h>


int main (void){

	int val1;
	char val2;
	int *pval1 = &val1; //asigno al puntero el valor en memoria de val1
	char *pval2 = &val2;

		printf("INGRESE UN NUMERO ENTERO:\n");
		scanf("%d",&val1);
		getchar();
		printf("INGRESE UN CARACTER\n");
		scanf("%c",&val2);

printf("EL VALOR DEL DE LA VARIABLE1 ES: %d-DECIMAL // %x-HEXADECIMAL // %p-DIRECCION DE MEMORIA\n",val1,val1,&val1 );
printf("EL VALOR DEL DE LA VARIABLE2 ES: %d-DECIMAL // %x-HEXADECIMAL // %p-DIRECCION DE MEMORIA\n",val2,val2,&val2 );

printf("EL PUNTERO DE LA VARIABLE1 ESTA EN: %p-DIRECCION DE MEMORIA Y CONTIENE EL VALOR: %d\n",&pval1,*pval1);
printf("EL PUNTERO DE LA VARIABLE2 ESTA EN: %p-DIRECCION DE MEMORIA Y CONTIENE EL VALOR: %d\n",&pval2,*pval2);

		printf("INGRESE UN NUEVO NUMERO ENTERO:\n");
		scanf("%d",&val1);
		getchar();
		printf("INGRESE UN NUEVO CARACTER\n");
		scanf("%c",&val2);

printf("EL PUNTERO DE LA VARIABLE1 MODIFICADA ESTA EN: %p-DIRECCION DE MEMORIA Y CONTIENE EL VALOR: %d\n",&pval1,*pval1);
printf("EL PUNTERO DE LA VARIABLE2 MODIFICADA ESTA EN: %p-DIRECCION DE MEMORIA Y CONTIENE EL VALOR: %d\n",&pval2,*pval2);


	return 0;
}