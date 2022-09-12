#include <stdio.h>

int main() {
    char c;
    printf("Enter any alphabet:\n");
    scanf("%c", &c);
    int n = c;
    if (n >= 97 && n <= 122){
        printf("Character is Lower Case\n");
        int a = n - 32;
        printf("Upper case is :%c", a);
        
    }
    else{
        printf("Character is Upper Case\n");
        int a = n + 32;
        printf("Lower case is: %c", a);
    }
}
