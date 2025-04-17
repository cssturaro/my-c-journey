// triangle sides ->  perimeter

#include <stdio.h>

int main(void) {
	float lado[3];
	
	for (int i = 0; i < 3; i ++) {
		printf("Qual o tamanho do lado %i \n ", i+1);
		scanf("%f", &lado[i]);
	}
	
	printf(" - Seu perimetro e %.2f",  lado[0] + lado[1] + lado[2]);
}
