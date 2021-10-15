#include<stdio.h>
void main(){
    int qty,dis=0;
    float rate,tot;
    printf("enter the value of qty and rate\n");
    scanf("%d%f",&qty,&rate);
    if (qty>1000)
    {
        dis=10;
        tot=((qty*rate)-(qty*rate*dis/100));
        printf("%f",tot);
    }
    else
    {
        tot=(qty*rate);
        printf("%f",tot);
        
    }
    
    
}