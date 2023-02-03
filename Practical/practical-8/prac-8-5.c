#include <stdio.h>
union student{
    int roll;
    char name[30];
    float per;
};
void main(){
    union student s1;
    printf("Enter the Roll No. of the student:");
    scanf("%d", &s1.roll);
    printf("%d\n", s1.roll);
    printf("Enter the Name of the student:");
    scanf("%s", &s1.name);
    printf("%s\n", s1.name);
    printf("Enter percentage of the student: ");
    scanf("%f", &s1.per);
    printf("%0.2f\n", s1.per); 
}
