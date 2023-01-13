#include<stdio.h>
void strCat(char *, char *);
int main(){
    char s1[100], s2[100];
    printf("Enter any string: ");
    gets(s1);
    strCpy(s1, s2);
    printf("Copied String is: ");
    puts(s2);
}
void strCpy(char *s1, char *s2){
    while(*s1){
        *s2++ = *s1++;
    }
    *s2 = NULL;
}
