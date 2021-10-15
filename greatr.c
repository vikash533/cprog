#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the no\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
    if (b>c)
    {
        printf("fist no is greater %d",a);

    }
    else
    {
        printf("third no is greater %d",c);
    }
    }
    else
    {
        if (b>c)
        {
            printf("second no is greater %d",b);
        }
        else
        {
            printf("thrird no is greater %d",c);
        }
        
    }
    

    
    }
    


