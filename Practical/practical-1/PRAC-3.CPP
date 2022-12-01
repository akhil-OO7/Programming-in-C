#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float p, r, t, a, si, ci;
  printf("Enter the principal amount, roi and time: ");
  scanf("%f%f%f", &p, &r, &t);
  si = ((p * r * t)/ 100);
  a = (p * (pow( 1 + r/100, t)));
  ci = a - p;
  printf("Simple interest: %f, Compound interest: %f", si, ci);
  getch();
}
