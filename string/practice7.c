#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30];
    int count=0,alph=0,ch=0,digit=0;
    printf("input the string:");

    gets(str);
    while(str[count]!='\0')
    {
        if(str[count]>'0'&& str[count]<='9')
        {
            digit++;
        }
        else if((str[count]>='a'&& str[count]<='z') || (str[count]>='A' && str[count]<='Z'))
        {
            alph++;
        }
        else
        {
            ch++;
        }
        count++;
    }
    printf("digits in the string are %d\n ",digit);
    printf("alphabets in the string are %d\n ",alph+1);
    printf("special characters in the string are %d\n ",ch-1);

}