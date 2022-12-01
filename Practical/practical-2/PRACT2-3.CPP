#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int n;
   printf("Enter any number to check whether it's odd or even: ");
   scanf("%d", &n);
   if(n % 2 == 0)
     printf("Number is even");
   else
     printf("Number is odd");
   getch();
}
