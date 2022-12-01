#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float c, f;
  printf("Enter the temperature in celsius: ");
  scanf("%f", &c);
  f = ((9 * c) / 5) + 32;
  printf("Temperature in Fahrenheit: %f",f);
  getch();
}