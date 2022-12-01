#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a, b, tmp;
  printf("Enter two numbers a, b to swap: ");
  scanf("%d%d", &a, &b);
  printf("Value of a: %d and b : %d", a, b);
  tmp = a;
  a = b;
  b = tmp;
  printf("\nAfter Swapping a: %d and b : %d", a, b);
  getch();
}