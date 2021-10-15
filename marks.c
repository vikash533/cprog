#include<stdio.h>
void main(){
    int a,b,c,d,e,aggre,perc;
    printf("mark obtained in math");
    scanf("%d",&a);
    printf("mark obtained in english");
    scanf("%d",&b);
    printf("mark obtained in science");
    scanf("%d",&c);
    printf("mark obtained in socaila science");
    scanf("%d",&d);
    printf("mark obtained in computer");
    scanf("%d",&e);
    aggre=(a+b+c+d+e);
    printf("total agreegate marks obtained = %d\n",aggre );
    perc=(aggre*100)/500;
    printf("%d",perc);                                                              


}