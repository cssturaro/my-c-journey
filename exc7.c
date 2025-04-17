// age -> years, months e days.

#include <stdio.h>

int main(void) {
	int idade;
	
	printf("digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Voce tem %i anos;\n", idade );
	printf(" %i meses;\n", idade * 12 );
	printf(" %i dias aproximadamente\n", idade * 12 * 365 );
}
