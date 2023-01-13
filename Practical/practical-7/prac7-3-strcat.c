#include<stdio.h>
char *strCat(char *, const char *);
int main(){
    char s1[] = "Hello";
    char s2[] = "World";
    strCat(s1, s2);
    puts(s1);
}

char *strCat(char *s1, const char *s2){
    if((s1 == NULL) && (s2 == NULL))
        return NULL;
    
    char *start = s1;
    
    while(*start != NULL)
        start++;
    
    while(*s2 != NULL)
        *start++ = *s2++;
    
    *start = NULL;
    return s1;
}
