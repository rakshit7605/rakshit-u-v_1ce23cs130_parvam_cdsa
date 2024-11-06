// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,reverse=0,remainder,orignal;
    printf("enter any integers:");
    scanf("%d",&num);
    orignal=num;
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
        
    }
    if(orignal==reverse)
    {
    printf("%d is a palindrome\n",orignal);
    printf(" ");
    }
    else
    {
        printf("%d is not a palindrome\n",orignal);
    }
    return 0;
}
    
    