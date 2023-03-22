#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check\n");
    scanf("%d",&year);
    if (year %400==0)
    {
        printf("It is a leap year\n");
    }
    else if (year %100==0)
    {
        printf("it is not a leap year\n");
    }
    else if (year %4==0)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not a leap year\n");
    }
    return 0;
}