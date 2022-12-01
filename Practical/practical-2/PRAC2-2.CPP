#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int n1, n2, n3;
   printf("Enter three distinct numbers: ");
   scanf("%d%d%d", &n1, &n2, &n3);
   if(n1 > n2 && n2 > n3)
      printf("%d is the greatest", n1);
   else if(n2 > n1 && n1 > n3)
      printf("%d is the greatest", n2);
   else
      printf("%d is the greatest", n3);
   getch();
}