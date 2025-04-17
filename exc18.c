// a program that swaps two variables

#include <stdio.h>

int main(void){
  int a, b, temp;

  printf("A = ");
  scanf("%i", &a);
  printf("B = ");
  scanf("%i", &b);

  temp = a;
  a = b;
  b = temp;

  printf("A: %i\n", a);
  printf("B: %i", b);
}
