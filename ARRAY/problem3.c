/*#include<stdio.h>
void add(int a[])
{
    a[4]=10;
}
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\n",a[4]);
    add(a);
    printf("%d\n",a[4]);

}*/
/*#include<stdio.h>
int main()
{
    int a[10];
    printf("%d %d",a[-1],a[15]);
}*/
/*#include<stdio.h>
int main()
{
    int arr[]={12,14,15,23,45};
    printf("%u,%u",arr,&arr);
}*/
/*#include<stdio.h>
int main()
{
    float arr[]={12.4,2.3,4.5,6.7};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
}*/
/*#include<stdio.h>
int main()
{
static int a[]={7,8,9};
printf("%d",2[a]+a[2]);
}*/
#include<stdio.h>
int main()
{
    int arr[]={10,11,12,15,23};
    printf("%u,%u",arr,&arr[3]);
}