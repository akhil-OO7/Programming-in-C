#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int num, rem, sum = 0;
   printf("Enter any number to calculate the sum of it's digits: ");
   scanf("%d", &num);
   while(num > 0) {
      rem = num % 10;
      sum = sum + rem;
      num = num / 10;
   }
   printf("Sum of the digits of entered number is: %d", sum);
   getch();
}