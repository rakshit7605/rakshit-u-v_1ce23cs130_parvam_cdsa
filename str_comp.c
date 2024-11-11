#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="h";
    char b[50]="hello";
    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("both strings are equal");
    }
    else if(res<0)
    {
        printf("strg1 is lesser than str2");
        
    }
    else
    {
        printf(" string 1 is greater than string 2");
    }
    return 0;
}