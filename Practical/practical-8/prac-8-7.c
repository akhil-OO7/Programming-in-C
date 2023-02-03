#include <stdio.h>
struct student{
    int roll;
    char name[30];
    int m1, m2, m3;
};
void main(){
    struct student s1;
    int marks;
    float per;
    printf("Enter the Roll No. of the student: ");
    scanf("%d", &s1.roll);
    printf("Enter the Name of the student: ");
    scanf("%s", &s1.name);
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &s1.m1, &s1.m2, &s1.m3);
    marks = s1.m1 + s1.m2 + s1.m3;
    per = marks / 3;
    printf("Students Details: \nName: %s\nRoll No: %d\nMarks: %d\nPercentage: %0.2f\n", s1.name, s1.roll, marks, per);
}
