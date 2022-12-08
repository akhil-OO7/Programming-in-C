#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
   clrscr();
   int n, i, flag = 0;
   printf("Enter any number to check whether it's prime or not: ");
   scanf("%d", &n);
   for(i = 2; i <= sqrt(n); i++) {
      if(n % i == 0)
	flag = 1;
   }
   if(flag == 1)
     printf("Not Prime");
   else
     printf("Prime");
   getch();
}