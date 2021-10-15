#include<stdio.h>
void main(){
    int p,n;
    float r,si,amount;
    printf("enter the value of principal=");
    scanf("%d",&p);
    printf("eneter the vlaue of year=");
    scanf("%d",&n);
    printf("enter the vlaue of rate=");
    scanf("%f",&r);
    //formula for calculation of simple intrest
    si=(p*r*n)/100;
    printf("simple inteeset is=%f\n",si);
    amount= p+si;
    printf("%f",amount);


}