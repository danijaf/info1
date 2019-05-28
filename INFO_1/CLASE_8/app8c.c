/*8c) Tomar el ejercicio 8b) y modificarlo para que el resultado sea almacenado en un nuevo parámetro pasado por referencia. 

La función no devuelve nada. El prototipo de la función sería: void sumar ( int* var1, int* var2, int* res); 
*/


#include <stdio.h>

int pedirEntero();
void suma(int *var1, int *var2, int *res);
void resta(int *var1, int *var2, int *res);

int main(void){
	int v1;
	int v2;
	int *val1=&v1;//paso los valores por referencia
	int *val2=&v2;
	int v3;
	int *val3=&v3;


	v1 = pedirEntero();
	v2 = pedirEntero();
	v3 =0;


	suma(val1,val2,val3);
	
	printf("V3 => RESULTADO DE LA SUMA =%d\n",v3 );
	

	resta(val1,val2,val3);

	printf("V3 => RESULTADO DE LA RESTA =%d\n",v3 );
	// printf("Puntero VAL1 Posicion: %p VALOR= %d\n",&val1,*val1);
	// printf("Puntero VAL2 Posicion: %p VALOR= %d\n",&val2,*val2);

	// v1 = pedirEntero();//pido los valores y los agrego
	// v2 = pedirEntero();


	// printf("SUMA = %d\n",suma(val1,val2));
	// printf("RESTA = %d\n",resta(val1,val2));


	// printf("Puntero VAL1 Posicion: %p VALOR= %d\n",&val1,*val1);
	// printf("Puntero VAL2 Posicion: %p VALOR= %d\n",&val2,*val2);
	return 0;
}



/*========================================PEDIR ENTERO===================================================*/
int pedirEntero(void){

	int numEntero;

	printf("Por Favor ingrese un numero entero\n");
	scanf("%d",&numEntero);

	return numEntero;
}
/*========================================================================================================*/

/*================================================SUMAR===================================================*/
void suma(int *s1,int *s2, int *res){

	
	*res=*s1+*s2;

	return;
}
/*========================================================================================================*/
void resta(int *r1,int *r2, int *res){

	
	*res=*r1-*r2;

	return;
}