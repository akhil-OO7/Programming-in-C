#include<stdio.h>
int strLen(char []);
char *strCat(char *, const char *);
int main(){
    char a[100];
    printf("Enter any string: ");
    gets(a);
    printf("The length of the string is: %d", strLen(a));
    strCat("Hello", "World");
}
int strLen(char a[]){
    int i;
    for(i = 0; a[i] != '\0'; i++);
    return i;
}
