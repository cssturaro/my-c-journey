// circle radius -> area e perimeter

#include <stdio.h>

int main(void) {
	float raio;
	
	printf("Qual o raio do seu círculo?\n ");
	scanf("%f", &raio);
	
	printf(" - Sua area e %.2f\n", raio * raio * 3.14);
	printf(" - Seu perimetro e %.2f",  raio * 2 * 3.14);
}
