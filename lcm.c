#include<stdio.h>

int lcm(int a, int b);

int main()

{
    int a,b,result;

    printf("Enter Two Numbers :\n");
    scanf("%d %d",&a,&b);

    result = lcm(a,b);

    printf("\nLCM of %d and %d is %d\n",a,b,result);

    return 0;
}

int lcm(int a,int b)
{
    static int com=1;

    if(com%a == 0 && com%b == 0)
    {
        return com;
    }
    com++;
    lcm(a,b);

    return com;
}
