// two int numbers  -> quotient and the remainder of the integer division between them.

#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	
	printf("digite um numero inteiro: ");
	scanf("%i", &num1);
	printf("digite outro numero inteiro: ");
	scanf("%i", &num2);
	
	printf("Seu quociente em uma divisao inteira e: %i\n", num1/num2);
	printf("Seu resto em uma divisao e: %i", num1%num2);
}
