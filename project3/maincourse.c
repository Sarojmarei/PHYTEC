#include<stdio.h>
int maincourse(int total)
{
    int a,b,c,d,e;
    printf("Menu of maincourse\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("1.nan\n2.zerra rice\n3.panner\n4.chicken\n5.dal fry\n6.exit\n");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate nan-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*20;
            break;

            case 2:
            printf("1 plate zeera rice-Rs 60\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*60;
            break;
             
            case 3:
            printf("1 plate panner-Rs 100\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*100;
            break;

            case 4:
            printf("1 plate chicken-Rs 120\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*120;
            break;

            case 5:
            printf("1 plate dal fry-Rs 50\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&e);
            return total+=e*50;
            break;



            default:
            printf("thankyou for having maincourse");

        }
        if (ele==6)
        {
            break;
        }
    }
}