// base and height -> area and perimeter

#include <stdio.h>

int main(void) {
	float base;
	float altura;
	
	printf("Qual a base do seu retangulo?\n ");
	scanf("%f", &base);
	printf("Qual a altura do seu retangulo?\n ");
	scanf("%f", &altura);
	
	printf(" - Sua area e %.2f\n", base * altura);
	printf(" - Seu perimetro e %.2f",  base * 2 + altura * 2);
}
