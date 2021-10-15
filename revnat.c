// write a program to print all natural no in reverse (from n to 1)

#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of natural no to print \n");
    scanf("%d",&n);
    while (n>=1)
    {
        printf("%d \n",n);
        n--;
    }
    

}