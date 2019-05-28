/*6a) Ingresar por teclado dos números reales y luego el caracter correspondiente a una operación matemática 
("+","-","*","/"). El programa debe realizar la operación correspondiente entre ambos números. 
Si no reconoce el caracter, imprimir "Operación NO Válida".

*/

#include<stdio.h>
#include<math.h>

int main(void){

float num1;
float num2;
char  op;
float res;

	printf("INGRESE LA OPERACION A REALIZAR: \n");
	scanf("%c",&op);

	printf("INGRESE EL PRIMER NUMERO\n");
	scanf("%f",&num1);

	printf("INGRESE EL SEGUNDO NUMERO\n");
	scanf("%f",&num2);



	switch(op){

		case '+':
		res=num1+num2;
			printf("%f + %f = %f\n",num1,num2,res );
		break;
		
		case '-':
		res=num1-num2;
			printf("%f - %f = %f\n",num1,num2,res );
		break;
		
		case '/':
			if (num2 != 0)
			{
				res=num1/num2;
				printf("%f / %f = %f\n",num1,num2,res );
			}else{
				printf("NO SE PUEDE DIVIDIR POR 0\n");
			}
		break;

		case '*':
		res=num1*num2;
		printf("%f * %f = %f\n",num1,num2,res );
		break;

		default:
		printf("NO SE RECONOCE EL OPERANDO\n");
		break;
	}


return 0;

}