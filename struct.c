#include<stdio.h>
#include<string.h>
struct cricketers{
    char name[30];
    char country[30];
    int avg;
};
int main(){
    int n, i;
    char pname[30], cname[30];
    struct cricketers c[100];
    printf("Enter the number of Cricketers: ");
    scanf("%d", &n);
    printf("Enter the data of %d cricketers \n", n);
    for(i = 0; i < n; i++){
        if(i + 1 == 1){
            printf("\nEnter the Name of %dst cricketer: ", i + 1);
            scanf("%s", &c[i].name);
            printf("Enter the Country of %dst cricketer: ", i + 1);
            scanf("%s", &c[i].country);
            printf("Enter the Batting Average of %dst cricketer: ", i + 1);
            scanf("%d", &c[i].avg);
        }
    }
    printf("Enter the name of cricket to display his details: ");
    scanf("%s", &pname);
    
    for(i = 0; i < n; i++)
        if(strcmp(pname, c[i].name) == 0)
            printf("Name: %s\nCountry:%s\nAverage: %d\n", c[i].name, c[i].country, c[i].avg);
            
    printf("The Players who have batting average above 40: \n");
    for(i = 0; i < n; i++)
        if(c[i].avg > 40)
            printf("Name: %s\nCountry: %s\nAverage: %d\n", c[i].name, c[i].country, c[i].avg);
            
    printf("Enter the Country of the cricketers to display his details: ");
    scanf("%s", &cname);
    for(i = 0; i < n; i++)
        if(strcmp(cname, c[i].country) == 0)
            printf("Name: %s\nCountry: %s\nAverage: %d\n", c[i].name, c[i].country, c[i].avg);
    return 0;
}
