#include<stdio.h>
int main()
{
    int mon =23;
    int tue=19;
    int wed;
    printf("Enter the tempreature for wednesday:");
    scanf("%d",&wed);
    if (wed==mon)
    {
        printf("the temperature is %d degree celsius\n",mon);
    }
    else if( wed==tue)
    {
        printf("the temperature is %d degree celsius\n",tue);
    }
    else{
        printf("the temperature is not predicted\n");
    }
}