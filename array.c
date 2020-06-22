#include<stdio.h>

const int rows=3;
const int cols=3;

void ip_ary(int ary[][cols],int rows,int cols);
void op_matrix(int ary[][cols],int rows,int cols);
void dgl_sum(int ary[][cols],int rows,int cols);

void main()

{
    int ary[rows][cols];
    int i,j;

    printf("Enter numbers for 3*3 matrix:\n\n");
    ip_ary(ary,rows,cols);

    printf("\nMatrix is,\n\n");
    op_matrix(ary,rows,cols);

    printf("\n");
    dgl_sum(ary,rows,cols);

    return 0;
}

void ip_ary(int ary[][cols],int rows,int cols)
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element - [%d][%d] = ",i,j);
            scanf("%d",(*(ary+i)+j));
        }
    }

}

void op_matrix(int ary[][cols],int rows,int cols)
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(*(ary+i)+j));
        }
        printf("\n");
    }

}

void dgl_sum(int ary[][cols],int rows,int cols)
{
    int i,j,sum;

    printf("diagonal numbers are ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
               printf("%d     ",*(*(ary+i)+j));
               sum+=*(*(ary+i)+j);
            }
        }
    }
    printf("\nSum of diagonal numbers =%d\n\n",sum);
}
