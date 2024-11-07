
#include <stdio.h>

int main() {
    int*ptr=(int*)malloc(sizeof(int));//4bytes of men for pointer<-typecasting
    *ptr=10;
    printf("bfr free %d",*ptr);
    free(ptr);
    printf("after free %d",*ptr);//random variables
    return 0;
}
