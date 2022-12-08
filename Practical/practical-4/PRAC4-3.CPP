#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int fact = 1, n, i;
   printf("Enter the value of N to calculate N!: ");
   scanf("%d", &n);
   for(i = n; i > 1; i--)
      fact *= i;
   printf("%d", fact);
   getch();
}