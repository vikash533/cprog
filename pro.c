#include<stdio.h>
void main(){
    int cp,sp,p,l;
    float perp,perl;
    printf("enter the value of cp\n");
    scanf("%d",&cp);
    printf("enter the value of sp\n");
    scanf("%d",&sp);
    p=(sp-cp);
    l=(cp-sp);
    if (sp>cp)
    {
        printf("profit %d\n",p);
        perp=(p%100);
        printf("perp%f\n",perp);

    }
    else
    {
        printf("loss %d\n",l);
        perl=(l%100);
        printf("perl %f\n",perl);

    }
    
}
