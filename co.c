#include<stdio.h>
void main(){
    int xa,xb,xc,ya,yb,yc;
    float slope1,slope2,slope3;
    printf("enter the coordinate of 1st point\n");
    scanf("%d%d",&xa,&ya);
    printf("\nenter the coordinate of 2nd point\n");
    scanf("%d%d",&xb,&yb);
     printf("\nenter the coordinate of 3rd point\n");
    scanf("%d%d",&xc,&yc);
    slope1=((yb-ya)*1.0/(xb-xa));
    slope2=((yc-yb)*1.0/(xc-xb));
    slope3=((yc-ya)*1.0/(xc-xa));
    if (slope1==slope2==slope3)
    {
    printf("points are colliner");
    }
    else
    {
        printf("points are not colliner");

    }
    
    

}
