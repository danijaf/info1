/*clase 2

2a- imprimir 2 variables enteras (signadas/no signadas)
2b- ingresar entero, imprimirlo
2c- ingresar 2 enteros, realizar operaciones(+,-,*,/)
2d- probar separadores en el scanf( espacio, ;, /)	

*/


#include <stdio.h>

int/*devuelve un entero*/ main (void)/*recibe nada*/
{
	//INDENTAR es tabular el codigo
	//int var=7; //inicializo la variable entera var con un valor de 7 cierro con ;
	int var1,var2;//inicializo con la basura que tenia el espacio en memoria
	var1=79; // asigno 79 a var1
	var2=11; // asigno 11 a var2
	printf("La variable 1 es:[%d] \nLa variable 2 es [%d]\n ",var1, var2);
	//%d es el contenido de la variable entera var


	return(0);//devuelvo un entero, si devuelvo un 0 quiere decir que todo corrio bien

}
