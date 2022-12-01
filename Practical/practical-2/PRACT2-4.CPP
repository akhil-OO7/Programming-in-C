#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int year;
   printf("Enter year to check whether it's leap: ");
   scanf("%d", &year);
   if(year % 4 == 0)
     if(year % 100 == 0)
	if(year % 400 == 0)
	   printf("Leap Year");
	else
	   printf("Not Leap Year");
     else
	printf("Leap Year");
   else
      printf("Not Leap Year");
   getch();
}