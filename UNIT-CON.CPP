#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int unit;
   float charge;
   printf("Enter consumption Unit: ");
   scanf("%d", &unit);

   if(unit > 0 && unit <= 200)
     charge = unit * 0.50;

   else if(unit > 200 && unit <= 400)
     charge = 100 + (unit - 200) * 0.65;

   else if (unit > 400 && unit <= 600)
     charge = 230 + (unit - 400) * 0.80;

   else
     charge = 390 + (unit - 600) * 1.00;

   printf("Your charge is: %f", charge);
   getch();
}