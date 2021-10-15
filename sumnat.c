// write a programm to fund sum of all natural number between 1 to n.

#include<stdio.h>
void main(){
    int n,sum;
    printf("enter the value of natural no");
    scanf("%d",&n);
    while (n>0)
    {
        sum = (n*(n+1)/2);
        printf("sum=%d \n",sum);
        {
            break;
        }
    }
    
}