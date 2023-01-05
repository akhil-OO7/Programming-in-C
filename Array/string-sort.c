#include <stdio.h>
#include <string.h>
int main() {
    char name[50][50], tmp[50];
    int i, j, n;
    printf("Enter no. of students (<50): ");
    scanf("%d", &n);
    printf("Enter the name of %d students: ", n);
    for(i = 0; i < n; i++)
        scanf("%s", &name[i]);
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if((strcmp(name[i], name[i+1])) > 0){
                strcpy(tmp, name[i]);
                strcpy(name[i], name[i+1]);
                strcpy(name[i+1], tmp);
            }
        }
    }
    printf("Sorted Array is: ");
    for(i = 0; i < n; i++)
        printf("%s ", name[i]);
    
    return 0;
}
