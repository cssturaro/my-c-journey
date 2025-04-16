// radius and height -> cilinder volume

#include <stdio.h>

int main(void) {
	float raio, altura;
	
	printf("Qual o raio do seu cilindro?\n ");
	scanf("%f", &raio);

	printf("Qual a altura do seu cilindro?\n ");
	scanf("%f", &altura);
	
	printf(" - Seu volume é e %.2f\n", raio * raio * 3.14 * altura);
}
