#include <stdio.h>
/*  Fibonacci
	Defini��o Recursiva: Para todo x >= 0
		p(x) = p(x-1)+p(x-2), se x > 1
		p(x) = 1, se x == 0 -> p(0) = 1
		p(x) = 1, se x == 1 -> p(1) = 1 */
		
// Passo Recursivo
int p(int x){
	if (x > 1) return p(x-1)+p(x-2);
	if (x == 0) return 1;
	if (x == 1) return 1;
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
