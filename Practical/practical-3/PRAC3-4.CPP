#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int num;
  printf("Enter the number to find out the day of the week: ");
  scanf("%d", &num);
  printf("Day is: ");
  switch(num) {
    case 1:
	printf("Monday");
	break;
    case 2:
	printf("Tuesday");
	break;
    case 3:
	printf("Wednesday");
	break;
    case 4:
	printf("Thursday");
	break;
    case 5:
	printf("Friday");
    case 6:
	printf("Saturday");
    case 7:
	printf("Sunday");
    default:
	printf("Wrong choice entered");
	break;
 }
 getch();
}