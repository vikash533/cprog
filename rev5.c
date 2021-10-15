#include<stdio.h>
void main(){
    int x,r,y=0;
    printf("enter ith five digit no\n");
    scanf("%d",&x);
    while (x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;

    }
    printf("reversed no is %d\n",y);
        

    
}