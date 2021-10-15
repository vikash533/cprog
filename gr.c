#include<stdio.h>
void main(){
    int a,b,c,d,e,per;
    printf("enter the marks of different subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=((a+b+c+d+e)/5);
    if (per>60)
    {
        printf("first division\n");
    }
    else
    {
        if (per>=50)
        {
            printf("second division");
        }
        else
        {
            if (per>=40)
            {
            printf("third divison");
            }
            else
            {
                printf("fail");
            }
            
        }
        
    }
}