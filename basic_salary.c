#include<stdio.h>
void main(){
    float bs,gs,hra,da;
    printf("basic salary of employee\n");
    scanf("%f",&bs);
    if (bs<1500)
    {
        da=(.9*bs);
        hra=(.1*bs);
        gs=bs+da+hra;
        printf("gross salary = Rs %f\n",gs);

    }
    else
    {
        hra=500;
        da=(.98*bs);
        gs=bs+hra+da;
        printf("gross salary = Rs %f\n",gs);

    }
    
}
