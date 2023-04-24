#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,4,3,2,1};
    int b[3][3]={2,3,4,5,6,1,2,1,3};
    int c[3][3],i,j,k;
    printf("Matrix of A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix of B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplication of two matrix A and B are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
                sum = sum + a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}