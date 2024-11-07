
#include <stdio.h>

int main() {
    int*ptr;//wild ptr
   int num=100;
   int*a;//wild pointer->not initialized
   a=&num;//not wild coz assigned with add of a variable
   printf("%u\n",a);
   printf("%u\n",ptr);
   printf("%d\n",*a);
}
