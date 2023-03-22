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
    struct employee emp[2]={{10,50000,"alex"},{20,50000,"sunit"}};
    lcd_emp_display(emp);
}
lcd_emp_display(struct employee emp[])
{
    int i;
    for (i=0;i<2;i++)
    {
        printf("%d\n",emp[i].empno);
        printf("%f\n",emp[i].sal);
        printf("%s\n",emp[i].ename);
    }
};