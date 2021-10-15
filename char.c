#include <stdio.h>
void main(){
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
    printf("%c is upper character\n",ch);
    }
    else if (ch>=97 && ch<=122)
    {
    printf("%c is lower charcter\n",ch);
    }
    else if (ch>=48 && ch<=57)
    {
    printf("%c is a digit\n",ch);
    }
    else if ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))

    {
    printf("%c is a special character",ch);
    }
    
    
    
}