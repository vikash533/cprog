#include<stdio.h>
void main(){
    int i,n;
    printf("enter the value of n \n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i=i+2)
    {
        printf("i=%d\n",i);
    }
    
}