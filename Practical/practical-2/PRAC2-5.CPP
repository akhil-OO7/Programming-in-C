#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int age;
   printf("Enter age: ");
   scanf("%d", &age);
   if(age > 25)
     printf("Total working hours: 8");
   else if(age > 21 && age <= 25)
     printf("Total working hours: 6");
   else if(age > 16 && age <= 20)
     printf("Total working hours: 3");
   else
     printf("Total working hours: 0");
   getch();
}