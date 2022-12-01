#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int n1, n2;
  printf("Enter two numbers: ");
  scanf("%d%d", &n1, &n2);
  if (n1 == n2)
     printf("\nEntered numbers are equal");
  else
     printf("\nEntered numbers are not Equal");
  getch();
}