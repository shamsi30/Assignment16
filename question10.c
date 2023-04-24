#include<stdio.h>
int main()
{
    int a[3][3]={1,0,0,1,1,1,1,0,1,};
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==1)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}