#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>i*j/2)
        printf("Sparce matrix");
    else
        printf("Not sparce matrix");

    return 0;
}