#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  for(int i = 0; i <= n; i++)
     printf("%d\n", i);
  getch();
}

