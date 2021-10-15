//programm to print alphabet from a to z

#include<stdio.h>
void main(){
    char ch;
    printf("\n Alphabet from a to z\n");
    scanf("%c",ch);
    while (ch>=97 && ch<=122)
    {
        printf("%c \n",ch);
        ch=ch+1;
    }
    

}