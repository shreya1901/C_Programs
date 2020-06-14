#include<stdio.h>

int add(int n);

void main()

{
    int n,sum;

    printf("Enter any number = ");
    scanf("%d",&n);

    sum = add(n);

    printf("Sum of every Digit = %d",sum);
}

int add(int n)
{
    int sum=0;

    if(n==0)
    {
        return 0;
    }

    sum = (n%10) + add(n/10);
    return sum;

}
