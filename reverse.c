// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,reverse=0,remainder;
    printf("enter any integers:");
    scanf("%d,&num);
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
        
    }
    printf("reversed number=%d\n",reverse);
    return 0;
}
    
    
    
    