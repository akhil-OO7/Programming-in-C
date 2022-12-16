#include<stdio.h>
#include<conio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
void main()
{
   clrscr();
   int num1, num2, result;
   char ch;
   printf("Enter the operation you want to perform (+, -, *, /): ");
   scanf("%c", &ch);
   printf("Enter two integers: ");
   scanf("%d%d", &num1, &num2);
   switch(ch){
     case '+':
	 result = add(num1, num2);
	 break;
     case '-':
	 result = sub(num1, num2);
	 break;
     case '*':
	 result = mul(num1, num2);
	 break;
     case '/':
	 result = div(num1, num2);
	 break;
     default:
	 printf("Wrong Operation Entered.");
	 break;
   }
   printf("%d %c %d = %d", num1, ch, num2, result);
   getch();
}
int add(int num1, int num2){
    return (num1 + num2);
}
int sub(int num1, int num2){
    return (num1 - num2);
}
int mul(int num1, int num2){
    return (num1 * num2);
}
int div(int num1, int num2){
    return (num1 / num2);
}