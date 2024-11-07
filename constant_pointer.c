
#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int*const ptr=&a;
    *ptr=&a;
    *ptr=30;
    printf("the value of ptr is %d",*ptr);
    return 0;
}
    
