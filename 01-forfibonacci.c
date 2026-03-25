#include <stdio.h>
int main(void){
	int i;
	int n;
	int y = 1;
	int x = 1;
	int soma;
	printf ("valor de n eh: ");
	scanf ("%i", &n);
	if (n == 0 || n == 1) return 1;
	if (n < 0) return 0;
	for (i = 2; i <= n; i++){
		soma =  x + y;
		x = y;
		y = soma;
		printf("\no valor da etapa %i eh: %i", i, soma);
	}
}