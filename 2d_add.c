#include<stdio.h>
int main()
{
    int sum;
    int a[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
         sum+=a[i][j];  
         printf("%d ",sum);
        }
        printf("\n");

    }
    
    return 0;
}