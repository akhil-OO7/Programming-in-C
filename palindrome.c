// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int palin(char []);
int main() {
    char string[20];
    int i, length, flag = 0;
    printf("Enter string to check palindrome: ");
    scanf("%s", string);
    flag = palin(string);
    if (flag == 1)
        printf("Not Plaindrome");
    else
        printf("Palindrome");
    return 0;
}
int palin(char string[20]) {
    int flag = 0, length;
    length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (string[i] != string[length - i-1]){
            flag = 1;
            break;
        }
    }
    return flag;
}
