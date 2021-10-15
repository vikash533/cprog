//write a c program to find sum of all even numbers between 1to n.

#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("enter the upper limit\n");
    scanf("%d",&n);

    for ( i = 2; i <= n; i=i+2)
    {
       sum=sum+i;
    }
    printf("sum of first even %d sum of even no %d",n,sum);
}