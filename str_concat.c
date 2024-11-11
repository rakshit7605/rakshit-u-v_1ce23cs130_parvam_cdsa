#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="hello";
    char c[50]="world";
    char b[80];
    strcpy(b,a);
    printf("copied string is%s\n",b);
    printf("length of the copied string is %lu\n",strlen(b));
    strcat(a,b);
    printf("concatenated string1 is %s\n",a);
    strcat(b,c);
    printf("concatenated string2 is %s\n",b);
    return 0;
}