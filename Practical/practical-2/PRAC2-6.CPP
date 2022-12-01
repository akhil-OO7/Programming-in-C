#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
   clrscr();
   float a, b, c, d, root1, root2;
   printf("Enter a, b, c of the eq. of form ax^2 + bx + c: ");
   scanf("%f%f%f", &a, &b, &c);
   d = ((b * b) - (4 * a * c));
   if(d < 0){
      root1 = (sqrt(d) - b) / 2 * a;
      root2 = (-(sqrt(d)) - b) / 2 * a;
      printf("Roots of the eq. are: %f, %f", root1, root2);
   }
   else
      printf("Roots are Imaginary");
   getch();
}
