#include <stdio.h>
#include <string.h>
void main() {
    char a[10], result[10];
    int l, t, flag = 0;
    printf("Enter any string to check palindrome: \n");
    gets(a);
    for (l = 0; a[l] != '\0'; l++) {
        result[l] = tolower(a[l]);
    }
    t = l - 1;
    for (int i =0; i <= t; i++, t--) {
        if (result[i] != result[t]) {
            printf("Not Palindrome");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Palindrome");
}
