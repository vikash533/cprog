//write a c programm to find first and last digit of a number.

#include<stdio.h>
void main(){
    int n,first,last;
    printf("enter the number\n");
    scanf("%d",&n);
    last=n%10;
    while (n>10)
    {
        n=n/10;

    }
    first=n;
    printf("first=%d\n last=%d\n",first,last);



}