// int lower then 32 -> binary

#include <stdio.h>

int main(void) {
	int num;

	printf("Type your int: \n> ");
	scanf("%i", &num);

	int b1, b2, b4, b8, b16;

	b16 = (num/16) %2;
	b8 = (num/8) % 2;
	b4 = (num/4) % 2;
	b2 = (num/2) % 2;
	b1 = num %2;

	printf("%i%i%i%i%i", b16, b8, b4, b2, b1);

}
