#include<stdio.h>
void main(){
    int yr;
    printf("enter the yr\n");
    scanf("%d",&yr);
    if (( yr%100==0 && yr%400==0) || (yr%100 !=0 && yr%4==0))
    {
        printf("year is leap year\n");

    }
    else
    {
        printf("year is not leap yr\n");
    }
    
}
