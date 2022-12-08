#include<stdio.h>
#include<conio.h>
void main() {
   clrscr();
   int t1 = 0, t2 = 1, t3, n;
   printf("Enter the value of N to print fibonacci series: ");
   scanf("%d", &n);
   printf("%d %d ", t1, t2);
   for(int i = 2; i < n; i++) {
      t3 = t1 + t2;
      printf("%d ", t3);
      t1 = t2;
      t2 = t3;
   }
   getch();
}