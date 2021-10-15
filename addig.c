#include<stdio.h>

void main(){
    int a,r,s=0;
    printf("enter the five digit no ");
    scanf("%d",&a);
    while ( a!=0)
    
    {
    r=a%10;
    s=s+r;
    a=a/10;
    }
    printf("sum of digiti is =%d\n",s);



}
