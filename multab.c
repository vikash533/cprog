//write a c program to print multiplication table of any number.
#include<stdio.h>
void main(){
    int i ,n;
    printf("enter the no to print the table");
    scanf("%d",&n);

for ( i = 1; i <= 10; i++)
{
    
    printf("%d*%d =%d \n",n,i,(n*i));
}
}