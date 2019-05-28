/*
7c) Crear una función que calcule la potencia de un número entero. El prototipo es: int exponente(int base, int exp)
*/

int exponente (int base, int exp){

	for (int i = 1; i < exp; i++)
	{
		base=base*base;
	}
	return base;
}