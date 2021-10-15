//write a c program to find sum of all odd numbers between 1to n.

#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("enter the upper limit");
    scanf("%d",&n);

    for ( i = 1; i <= n; i=i+3)
    {
        sum=sum+i;

    }
    printf("sum of first %d sum of first odd no %d \n",n,sum);


}