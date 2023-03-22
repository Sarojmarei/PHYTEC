#include<stdio.h>
#include<string.h>
struct  employee
{
    int empno;
    float sal;
    char ename[10];
}employee;
int main()
{
    struct employee emp[3];
    int i;
    for (i=0;i<3;i++)
    {
        scanf("%d %s %f",&emp[i].empno,&emp[i].ename,&emp[i].sal);
    }
    for(i=0;i<3;i++)
    {
    printf("%d %s %f ",emp[i].empno,emp[i].ename,emp[i].sal);
    }
}