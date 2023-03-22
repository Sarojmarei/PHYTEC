#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30];
    int count=0,l=0;
    printf("input the string:");

    fgets(str,sizeof(str),stdin);
    printf("total no of words in string is\n");
    while(str[l]!='\0')
    {
        if (str[l]==' ')
        {
            ++count;
        }
        l++;
    }
    printf("%d",count+1);
  


}