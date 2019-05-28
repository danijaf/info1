/*6c) Realizar un programa que imprima todas las letras del abecedario. El formato de impresión será: 1 Letra por línea, 
en formato caracter, decimal y headecimal. Ejemplo: "Letra = b = 98 = 0x62"
*/
#include <stdio.h>

int main(void){

char letra = 'a';


while(letra <= 'z'){

printf("LETRA = %c = %d = 0x%x\n",letra,letra,letra );
letra++;

}

	return 0;
}