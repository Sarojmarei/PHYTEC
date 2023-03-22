#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    printf("Weight-Item1:");
    scanf("%f",&b);
    printf("No.of item1:");
    scanf("%f",&c);
    printf("Weight-Item2:");
    scanf("%f",&d);
    printf("No.of item2:");
    printf("Average value = %f ", ((a*b)+(c*d))/(b+d));  


}