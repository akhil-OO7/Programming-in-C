#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int sum = 0, n;
   printf("Enter any number: ");
   scanf("%d", &n);
   for(int i = 1; i <=n; i++)
      sum += i;
   printf("Sum upto %d is: %d", n, sum);
   getch();
}