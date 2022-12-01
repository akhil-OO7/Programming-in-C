#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
   clrscr();
   int n1, n2;
   float f1, f2;
   printf("Enter two integers:");
   scanf("%d%d", &n1, &n2);
   printf("Two Numbers are: %d %d\n",n1,n2);
   printf("Enter two floating point numbers:");
   scanf("%f%f", &f1, &f2);
   printf("Two Numbers are: %f %f",f1,f2);
   getch();
}