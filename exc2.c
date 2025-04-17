// square side -> area and perimeter

#include <stdio.h>

int main(void) {
	float lado;
	
	printf("Qual o lado do seu quadrado?\n ");
	scanf("%f", &lado);
	
	printf(" - Sua area e %.2f\n", lado * lado);
	printf(" - Seu perimetro e %.2f",  lado * 4);
}
