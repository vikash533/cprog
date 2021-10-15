#include<stdio.h>
void main(){
    int a,b,A,p;
    printf("enter the length of rectangle\n");
    scanf("%d",&a);
    printf("\nenter the breadth of rectangle\n");
    scanf("%d",&b);
    A=(a*b);
    p=2*(a+b);
    if (A>p)
    {
    printf("area of rectangle is greater than perimeter\n");
    }
    else
    {
        printf("perimeter of rectangle is greater than area of rectangle\n");
    }
    

}