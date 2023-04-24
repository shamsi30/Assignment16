#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,SR,SC;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        SR=0,SC=0; //SR=sum of row , SC=sum of coloumn//
        for(j=0;j<3;j++)
        {
            SR+=a[i][j];
            SC+=a[j][i];
        }
        printf("Sum of row(%d) is %d\n",i,SR);
        printf("Sum of column(%d) is %d\n",i,SC);
    }
    
    return 0;
}