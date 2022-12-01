#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
   clrscr();
   int m1, m2, m3, m4, m5, sum;
   float per;
   printf("Enter marks of 5 subjects (out of 100):  ");
   scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
   sum = m1 + m2 + m3 + m4 + m5;
   per = ((float(sum) * 100) / 500);
   printf("\nTotal marks and percetange are %d and %f resp", sum, per);
   getch();
}