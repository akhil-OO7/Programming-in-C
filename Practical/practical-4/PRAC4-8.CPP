#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int n, rev = 0, rem;
   printf("Enter any number to reverse it: ");
   scanf("%d", &n);
   while(n > 0) {
      rem = n % 10;
      rev = rev * 10 + rem;
      n = n / 10;
   }
   printf("%d", rev);
   getch();
}