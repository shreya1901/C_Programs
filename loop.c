#include<stdio.h>

void main()
{
    int i,j,n;

    printf("Hello,\nHere we are printing stairs:\nEnter number of rows = ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");
    }
}
