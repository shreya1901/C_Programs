#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter Integer Value of a = ");
    scanf("%d",&a);
    printf("Enter Integer Value of b = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping:\na = %d\nb = %d",a,b);
}
