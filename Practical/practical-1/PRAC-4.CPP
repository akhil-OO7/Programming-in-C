#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float r, area, cir;
  printf("Enter the radius of the circle:");
  scanf("%f", &r);
  cir = 2 * 3.14 * r;
  area = 3.14 * r * r;
  printf("Circumference: %f, Area: %f", cir, area);
  getch();
}
