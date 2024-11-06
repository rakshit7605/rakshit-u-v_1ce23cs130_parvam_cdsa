// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,n1=0,n2=1,next;
    printf("enter any integers:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",next);
        n1=n2;
        n2=next;
        next=n1+n2;
        
    }
    printf("\n");
    return 0;
}
    
    