#include<stdio.h>

int prime_num(int n,int i);

void main()

{
    int n,result;

    printf(":Enter number to check whether it is Prime or Not:\n");
    printf("Enter Number = ");
    scanf("%d",&n);

    result = prime_num(n,(n/2));

    if(result==1)
    {
        printf("\n%d is Prime Number\n",n);
    }
    else
    {
        printf("\n%d is Not Prime Number\n",n);
    }

}

int prime_num(int n,int i )
{
    if((i) == 1)
    {
        return 1;
    }
    else
    {
        if(n%(i) == 0)
        {
            return 0;
        }
        else
        {
            return prime_num(n,(i)-1);
        }
    }
}
