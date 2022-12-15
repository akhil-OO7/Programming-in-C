#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
   clrscr();
   int lo, hi, num, count = 0, temp, rem;
   double result = 0.0;
   printf("Enter two intervals (low - high) to find armstrong numbers: ");
   scanf("%d%d", &lo, &hi);
   printf("Armstrong numbers between %d and %d are: ", lo, hi);
   for(num = lo + 1; num < hi; num++){
      temp = num;
      while(temp != 0){
	 temp /= 10;
	 count++;
      }
      temp = num;
      while(temp != 0){
	 rem = temp % 10;
	 result += pow(rem, count);
	 temp /= 10;
      }
      if(int(result) == num)
	printf("%d ", num);
      result = 0.0;
      count = 0;
   }
   getch();
}


