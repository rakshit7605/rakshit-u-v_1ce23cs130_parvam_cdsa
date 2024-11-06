// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,fac=1;
    printf("enter the positive number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("give positive numbers");
    }
    else
    {
        for(int i=1;i<=num;i++)
        
        {
            fac*=i;
        }
        printf("factorial of %d=%d:",num,fac);
    }
}
    
    