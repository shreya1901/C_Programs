#include <stdio.h>
static unsigned long gcd(unsigned long a, unsigned long b);
static __inline unsigned long lcm(unsigned long a, unsigned long b);
int main(void)
{
    int ch;
    do
    {
    unsigned long ans = 1;
    int m;
    unsigned long i;
    printf("Enter max number up to which any number should be divisible equally : ");
    scanf("%d",&m);
    for (i = 1; i <= m; i++)
    {
        ans = lcm(ans, i);
    }
    printf("NUMBER : %lu\n", ans);
    printf("\nenter 1 to continue or 0 to exit\nEnter your choice : ");
    scanf("%d",&ch);
    }while(ch==1);
    return 0;
}
unsigned long gcd(unsigned long a, unsigned long b)
{
    unsigned long r;
    if (a > b)
    {
        unsigned long t = a;
        a = b;
        b = t;
    }
    while (r = a%b)
    {
        a = b;
        b = r;
    }
    return b;
}
unsigned long lcm(unsigned long a, unsigned long b)
{
    unsigned long long p = (unsigned long long)a * b;
    return p/gcd(a, b);
}
