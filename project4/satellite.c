#include<stdio.h>
int main()
{
int i;
char x[]={"$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40"};
printf("latitudeis:\n");
for (i=18;i<32;i++)
{
    printf("%c",x[i]);
}
printf("\n");
printf("longetude:\n");
for (i=33;i<49;i++)
{
    printf("%c",x[i]);
}
}