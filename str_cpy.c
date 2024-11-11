#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="hello";
    char b[50];
    strcpy(b,a);
    printf("%s",b);
    return 0;
}