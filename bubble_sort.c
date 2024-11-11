#include<stdio.h>
int main()
{
    int arr[]={64,34,25,12,22,11,90};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    printf("original array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;

}