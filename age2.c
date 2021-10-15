#include<stdio.h>
void main(){
    int ram,shyam,ajay;
    printf("enter the age of ram\n enter the age of shyam\n enter the age of ajay\n");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if ((ram>shyam) && (shyam>ajay))
    {
    printf("youngest is %d\n",ram);
    }
    else
    {
        printf("youngest is %d\n",ajay);

    }

    if(shyam>ajay)
    {
        printf("youngest is %d\n",shyam);

    }
    else
    {
        printf("youngest is %d",ajay);
    }
    
    
    



}