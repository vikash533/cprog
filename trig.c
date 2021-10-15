#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of 1st anle of triangle\n");
    scanf("%d",&a);
    printf("\nenter the value of 2nd angle of triangle\n");
    scanf("%d",&b);
    printf("\nenter the 3rd angle of triangle\n");
    scanf("%d",&c);
    
    if((a+b+c)==180)
    {
        printf("triangle is valid");

    }
    else
    {
        printf("triangle is not valid");
        
    }
    
}