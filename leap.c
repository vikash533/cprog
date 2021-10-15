#include<stdio.h>
void main(){
    int yr;
    printf("enter the year\n");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        printf("the given yr is leap year\n");

    }
    else
    {
        printf("the given yr is not leap yr\n");

    }
    
}
