#include<stdio.h>
void main(){
    char hardness,tensile_strength;
    int carbon_content;
    printf("enter the value of hardness\n");
    scanf("%c",&hardness);
    printf("\nenter the value of carbon cantent\n");
    scanf("%d",&carbon_content);
    printf("\nenter the value of tensile strength\n");
    scanf("%c",&tensile_strength);

    if ((hardness>50) && (carbon_content<0.7) && (tensile_strength>5600))
    {
        printf("grade of stell is 10");
        if ((hardness>50) && (carbon_content<0.7))
        {
        printf("grade of steel is 9");
        
        }
        if((hardness>50) && (tensile_strength>5600))
        {
            printf("grade of stell is 7");
        }
        if ((hardness>50) || (tensile_strength>5600) || (carbon_content<0.7))
        {
            printf("grade of stell is 6");
        }
        
        
    }
    else if ((hardness !=50) && (tensile_strength>!5600) && (carbon_content !=0.7))
    
    {
        printf("grade of stell is 5");
    }
    

}