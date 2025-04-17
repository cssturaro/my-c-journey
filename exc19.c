// write a program that calculates the root of a first-degree equation.

#include <stdio.h>

int main(void){
  float a, x, b;

  printf("The formula of an first-degree equation is: \n             ax + b = 0\n");
  printf("Type A value: ");
  scanf("%f", &a);
  printf("Type B value: ");
  scanf("%f", &b);

  x = -b / a;

  printf("%.2f", x);
}

