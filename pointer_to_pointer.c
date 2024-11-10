#include<stdio.h>
int main()
{
    int a=10;
    int*ptr=&a;
    int*pptr=&ptr;
    printf("%d",**pptr);
    return 0;
}