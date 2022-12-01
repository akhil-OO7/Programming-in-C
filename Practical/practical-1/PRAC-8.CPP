#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float a, b, c, s, area;
  printf("Enter three sides of the Triangle: ");
  scanf("%f%f%f", &a, &b, &c);
  s = (a + b + c)/ 2;
  area = sqrt(s * (s-a) * (s - b) * (s - c));
  printf("Area of the Triangle: %f", area);
  getch();
}