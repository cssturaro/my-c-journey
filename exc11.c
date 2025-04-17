// semester grade calculator (two units with two exams each -> avarage)

#include <stdio.h>

int main(void){
	int u1g1, u1g2, u2g1, u2g2;
	
	printf("--- FIRST UNIT ---\n");
	printf("Type your first grade: \n> ");
	scanf("%i", u1g1);
	printf("Type your second grade: \n> ");
	scanf("%i", u1g2);
	
	printf("\n--- SECOND UNIT ---\n");
	printf("Type your first grade: \n> ");
	scanf("%i", u2g1);
	printf("Type your second grade: \n> ");
	scanf("%i", u2g2);
	
	printf("--- SEMESTER RESULTS ---\n");
	printf("Your avarage is: %i", (((u1g1 + u1g2)/2) + ((u2g1 + u2g2)/2))/2);
}
