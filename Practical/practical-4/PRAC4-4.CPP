#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int n, i, sumEven = 0, sumOdd = 0;
   printf("Enter the value of N: ");
   scanf("%d",&n);
   for(i = 1; i <= n; i++) {
      if(i % 2 == 0)
	sumEven += i;
      else
	sumOdd += i;
   }
   printf("Sum of Even number up to %d is: %d\nSum of Odd number up to %d is: %d", n, sumEven, n, sumOdd);
   getch();
}