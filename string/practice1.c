#include<stdio.h>
int main()
{
    char str[30];
    printf("input the string:");
    fgets(str,sizeof str,stdin);
    printf("\n%s",str);
}