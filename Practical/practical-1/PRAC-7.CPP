#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a, b, tmp;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("Value of a: %d and b : %d", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("\nAfter Swapping Value of a: %d and b : %d", a, b);
  getch();
}