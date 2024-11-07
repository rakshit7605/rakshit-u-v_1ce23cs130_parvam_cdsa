
#include <stdio.h>
int add(int x,int y)
{
    int c=x+y;
    return c;
}

int main(){
    int a=10,b=20;
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}