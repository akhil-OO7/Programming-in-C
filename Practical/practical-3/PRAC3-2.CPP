#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int code;
  printf("Enter the code: ");
  scanf("%d", &code);
  printf("Your Color is: ");
  switch(code) {
    case 1:
	printf("Red");
	break;
    case 2:
	printf("Green");
	break;
    case 3:
	printf("White");
	break;
    case 4:
	printf("Yellow");
	break;
    case 5:
	printf("Orange");
    default:
	printf("Wrong code entered");
	break;
 }
 getch();
}