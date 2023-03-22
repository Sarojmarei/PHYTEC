#include<stdio.h>
int dessert(int total)
{
    int a,b,c,d,e;
    printf("Menu of dessert\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("1.gulabjamun\n2.rasmalai\n3.rasgula\n4.gajar halwa\n6.exit\n");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate gulabjamun-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*30;
            break;

            case 2:
            printf("1 plate rasmalai-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*30;
            break;
             
            case 3:
            printf("1 plate rasgula-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*30;
            break;

            case 4:
            printf("1 plate gajar halwa-Rs 30\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*30;
            break;

      

            default:
            printf("thankyou for having dessert");

        }
        if (ele==6)
        {
            break;
        }
    }
}