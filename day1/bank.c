#include<stdio.h>
int main()
{
    int amt,total;
    printf("Ënter the amount\n");
    scanf("%d",&amt);375
    total=amt/100;
    printf("There are:");
    printf("%d Notes of 100.00\n", total);
    amt=amt-(total*100);
    total=amt/50;
    printf("%d Notes of 50.00\n",total);
    amt=amt-(total*50);
    total=amt/20;
    printf("%d Notes of 20.00\n",total);
    amt=amt-(total*20);
    total=amt/10;
    printf("%d Notes of 10.00\n", total);
    amt=amt-(total*10);
    total=amt/5;
    printf("%d Notes of 5.00\n",total);
    amt=amt-(total*5);
    total=amt/2;
    printf("%d Notes of 2.00\n",total);
    amt=amt-(total*2);
    total=amt/1;
    printf("%d Notes of 1.00\n",total);
    return 0;
}

