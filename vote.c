#include<stdio.h>
void main(){
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    printf("you have enter %d as your age\n",age);
    if(age>18)
    {
        printf("you can vote");
    }
    else{
        printf("you can not vote");

    }


}
