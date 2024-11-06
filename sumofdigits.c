// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=123,sum=0,digit=0;
    while(num!=0)
    {
        digit=num%10;
        sum=digit+sum;
        
        num/=10;
        
    }
    printf("%d",sum);
    
    return 0;
}