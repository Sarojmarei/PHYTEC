#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[30],str2[30];
    int count=0,l=0;
    printf("input the 1st string:");

    fgets(str1,sizeof(str1),stdin);
    printf("input the 2nd string:");
    fgets(str2,sizeof(str2),stdin);
    while(str1[l]!='\0'&& str2[l]!='\0')
    {
        if (str1[l]==str2[l])
        {
            ++count;
        }
    }
    if (count>1)
    {
        printf("both the strings are equal\n");
    }
  


}