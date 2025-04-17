// (2 resistances in parallel) + 1 resistance in series -> Equivalent resistance

#include <stdio.h>

int main(void) {
	float res1, res2, res3, eq_res;
	
	// in parallel
	printf("Type the first resistance value (in parallel): \n>");
	scanf("%f", &res1);
	printf("Type the second resistance value (in parallel): \n>");
	scanf("%f", &res2);
	// in series
	printf("Type the third resistance value (in series): \n>");
	scanf("%f", &res3);
	
	eq_res = 1/(1/res1 + 1/res2) + res3;
	
	printf("%.2f", eq_res);
	
	return 0;
}
