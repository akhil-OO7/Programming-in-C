#include <stdio.h>
#include <math.h>
int main() {
      int values[7];
      printf("Enter 7 elements of array: \n");
      for(int i = 0; i < 7; i++) {
         scanf("%d", &values[i]);
      }
    // printf("Displaying integers: ");
      for(int j = 0, k = 1; j < 14; j++){
        if (j < 7) {
            if (j == 6)
                printf("%d\n", values[j]);
            else
                printf("%d, ", values[j]);
        }
        else {
            if (j - k == 0)
                printf("%d", values[j-k]);
            else
                printf("%d, ", values[j-k]);
                k += 2;
        }
      }
     return 0;
    }
