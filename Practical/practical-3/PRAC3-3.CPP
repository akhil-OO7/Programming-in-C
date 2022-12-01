#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int num;
  printf("Enter the number to find out the month: ");
  scanf("%d", &num);
  printf("The month is: ");
  switch(num) {
    case 1:
	printf("January");
	break;
    case 2:
	printf("Feburary");
	break;
    case 3:
	printf("March");
	break;
    case 4:
	printf("April");
	break;
    case 5:
	printf("May");
    case 6:
	printf("June");
    case 7:
	printf("July");
    case 8:
	printf("August");
	break;
    case 9:
	printf("September");
	break;
    case 10:
	printf("October");
	break;
    case 11:
	printf("November");
	break;
    case 12:
	printf("December");
	break;
    default:
	printf("Wrong choice entered");
	break;
 }
 getch();
}