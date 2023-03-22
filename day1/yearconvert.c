#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    printf("Number of days:",n);
    int years=n/365;
    int weeks=(n%365)/7;
    int days=((n%365)%30)%7;
    printf("Years:%d\n",years);
    printf("Weeks:%d\n",weeks);
    printf("Days:%d\n",days);
    return 0;
}