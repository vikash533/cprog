// program to print all natural numbers from 1 to n.

#include<stdio.h>
void main(){
    int i=1,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while (i<=n && n>0)
    {
        printf("%d \n",i);
        ++i;
    }
    
}