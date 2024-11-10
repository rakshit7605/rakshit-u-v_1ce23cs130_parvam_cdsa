#include <stdio.h>
int main()
{
    int n,arr[5];
    printf("enter the no of elemnts:");
    scanf("%d",&n);
    printf("enter the number %d elements:",n);
    for(int i=1;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("the array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}