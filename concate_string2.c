#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="hello";
    char str2[]="world";
    int i=0,j=0;
    while(str1[i]!='\0')    {
        i++;

    }
    while(str2[j]!='\0')
    {
        str1[i++]=str2[j++];
    }
    int length=strlen(str1);
    printf("lenght of str1 is %d",length);
    str[i]='\0';
    printf("%s\n",str1);
    return 0;
}