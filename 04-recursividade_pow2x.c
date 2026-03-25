#include <stdio.h>
#include <math.h>
/* Pot�ncia
	Defini��o Recursiva: Para todo x >= 0
		p(x) = p(x-1)+2^x, se x > 0
		p(x) = 1, se x == 0 -> p(0) = 1 */

// Passo Recursivo
int p(int x){
	if (x > 0) return p(x-1)+pow(2,x);
	if (x == 0) return 1;
	printf ("Entrada invalida!\n");
	return 0;
}
int main (void) {
	int resultado = p(5);
	printf ("Para p(%d) o resultado eh %d\n", 5, resultado);
	printf ("Para p(%d) o resultado eh %d\n", 3 , p(3));
	printf ("Para p(%d) o resultado eh %d\n", -2, p(-2));
	return 0;
}