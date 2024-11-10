#include <stdio.h>
#define max 5

int main() {
;    
    int arr[]={1,2,3,4,6};
    for(int i=0;i<=4;i++)
    {
        if(arr[i]<=1)
    {
    printf("the min is :%d",arr[i]);
    }
    else if(arr[i]>=max)
    {
    printf("the max is :%d\n",arr[i]);
    }
    }
    
    return 0;
}