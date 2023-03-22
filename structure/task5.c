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
    int i,a[10];
    struct employee emp[3]={{10,50000,"alex"},{20,50000,"sunit"},{10,40000,"Saroj"}};
    for(i=0;i<3;i++)
    {
    printf("%d %s %f ",emp[i].empno,emp[i].ename,emp[i].sal);
    }
}