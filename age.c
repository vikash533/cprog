#include<stdio.h>
void main(){
    int a,b,c;
    char ram,shyam,ajay;
    printf("enter the age of ram\n");
    scanf("%d",&a);
    printf("\nenter the age of shayam\n");
    scanf("%d",&b);
    printf("\nenter the age of ajay\n");
    scanf("%d",&c);
    if (a>b){
        if (b>c)
        {
            printf("youngest is %d",ram);
        }
        else
        {
            printf("youngest is %d",ajay);
        }
        
        
    }
    else
    {
        if (b>c)
        {
            printf("youngest is %d", shyam);

        }
        else
        {
            printf("youngest is %d",ajay);

        }
        
    }

 
    
    
}