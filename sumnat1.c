//write a c program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("enter upper limit\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
        
    }
    printf("sum of first %d natural number=%d\n",n,sum);
}