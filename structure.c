#include<stdio.h>

void inp(int x);
void outp(int y);

struct employee
{
    char name[50];
    int age;
    char ph_num[10];
    int salary;
}p[20];

void main()

{
    int i,n;

    printf("Enter Number of employees you want to enter = ");
    scanf("%d",&n);

    inp(n);

    outp(n);

}

void inp(int x)
{
    int i;

    for(i=0;i<x;i++)
    {
        printf("\n");

        printf("Enter Employee Name : ");
        scanf("%s",&p[i].name);

        printf("Enter Age of Employee : ");
        scanf("%d",&p[i].age);

        printf("Enter Contact number of Employee : ");
        scanf("%s",&p[i].ph_num);

        printf("Enter Salary amount of Employee : ");
        scanf("%d",&p[i].salary);

    }
}

void outp(int y)
{
    int i;

    printf("\n------------------- Details Of Employee -------------------\n");
    printf("\nName\t\tAge\tContact Number\t\tsalary\n");
    printf("--------------------------------------------------------------\n");

    for(i=0;i<y;i++)
    {
        printf("%s\t\t%d\t%s\t\t%d\t\n",p[i].name,p[i].age,p[i].ph_num,p[i].salary);
    }
}
