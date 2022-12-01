#include<stdio.h>
#include<conio.h>
void main() {
  clrscr();
  int n1, n2;
  char ch;
  printf("Specify the operation to be performed (*, /, +, -): ");
  scanf("%c", &ch);
  printf("Enter two numbers: ");
  scanf("%d%d", &n1, &n2);
  switch(ch) {
    case '+':
	printf("%d + %d: %d", n1, n2, n1 + n2);
	break;
    case '-':
	printf("%d - %d: %d", n1, n2, n1 - n2);
	break;
    case '*':
	printf("%d * %d: %d", n1, n2, n1 * n2);
	break;
    case '/':
	printf("%d / %d: %d", n1, n2, n1 / n2);
	break;
    default:
	printf("Wrong choice entered");
	break;
 }
 getch();
}