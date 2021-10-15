#include<stdio.h>
void main(){
    int l,b,r,area,perimeter;
    float ca,cc;
    printf("enter the length");
    scanf("%d",&l);
    printf("enter the breadth");
    scanf("%d",&b);
    area=(l*b);
    printf("%d\n",area);
    perimeter= (2*(l+b));
    printf("%d\n",perimeter);
    printf("enter the value of radius");
    scanf("%d",&r);
    ca= (3.14*r*r);
    printf("are of circle is =%f\n",ca);
    cc=(2*3.14*r);
    printf("circufrence of circle is =%f",cc);

}