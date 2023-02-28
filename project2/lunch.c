#include<stdio.h>
int lunch(int total)
{
    int a,b,c,d,e,f;
    printf("Menu of lunch\n");
    printf("------------------\n");
    while(1)
    {
        int ele;
        printf("\n1. rice\n2. roti\3. dal\n4. panner sabji\n5. chicken sabji\n6. swets\n7.exit");
        printf("enter option what you want to eat\n");
        scanf("%d",&ele);
        switch(ele)
        {
            case 1:
            printf("1 plate rice-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&a);
            return total+=a*20;
            break;

            case 2:
            printf("1 plate roti-Rs 5\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&b);
            return total+=b*5;
            break;
             
            case 3:
            printf("1 plate dal-Rs 20\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&c);
            return total+=c*20;
            break;

            case 4:
            printf("1 plate paneer sabji-Rs 45\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&d);
            return total+=d*45;
            break;

            case 5:
            printf("1 plate chicken curry-Rs 60\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&e);
            return total+=e*60;
            break;

            case 6:
            printf("1 plate sweets-Rs 10\n");
            printf("enter the quantity to eat\n");
            scanf("%d",&f);
            return total+=f*10;
            break;

            



            default:
            printf("thankyou for having breakfast");

        }
        if (ele==7)
        {
            break;
        }
    }
}