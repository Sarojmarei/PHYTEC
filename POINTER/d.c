#include<stdio.h>
int main()
{
    char x[100];
    for (int i=0;i<2;i++)
    {
        scanf("%c",&x[i]);
    }
    for (int i=0;i<2;i++)
    {
        printf("%c",x[i]);
    }

}

