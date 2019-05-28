/*5e) Realizar un programa que solicite el ingreso de un número entero del 1 al 7 y en función del número ingresado, 
informe el día de la semana siendo 1 el Domingo, 2 el Lunes y así sucesivamente. Si el número es mayor a 7 
deberá enviar un mensaje de error.*/

#include <stdio.h>

int main(void){

int valordia;

	printf("INGRESE UN NUMERO ENTERO DEL 1 AL 7\n");

	scanf("%d",&valordia);



switch(valordia){

	case 1:
	printf("El dia 1 es el DOMINGO\n");
	break;

	case 2:
	printf("El dia 2 es el LUNES\n");
	break;

	case 3:
	printf("El dia 3 es el MARTES\n");
	break;
	
	case 4:
	printf("El dia 4 es el MIERCOLES\n");
	break;

	case 5:
	printf("El dia 5 es el JUEVES \n");
	break;

	case 6:
	printf("El dia 6 es el VIERNES\n");
	break;

	case 7:
	printf("El dia 7 es el SABADO\n");
	break;

	default :
	printf("ERROR DE NUMERO INGRESADO\n");
	break;
}




	return 0;
}