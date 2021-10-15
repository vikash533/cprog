#include<stdio.h>
void main(){
    int a,b,e;
    float c,d;
    printf("enter the distance b/w two cities" \n);
    scanf("%d",&a);
    b=(a*1000);
    printf("distance b/w two cities in meter is = %d",b);
    //dis(feet)= dist(km)*3280.84 feets
    c=(a*3280.84);
    printf("distance b/w two cities in feet is = %f",c);
    //dis(inches)= dist(km)*39370.1 inches
    d=(a*39370.1);
    printf("distance b/w two cities in inch is = %f",d);
    //dist(centimeter)= dis(km)*100000;
    e=(a*100000);
    printf("distance b/w two cities in centimeter is = %d",e);


}