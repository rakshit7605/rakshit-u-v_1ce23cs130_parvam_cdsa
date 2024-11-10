#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int pincode;
        char name[20];
        char address[100];
    };
    struct student s1;
    printf("enter the name\n");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]=0;
    printf("enter address\n");
     fgets(s1.address,sizeof(s1.address),stdin);
    s1.address[strcspn(s1.address,"\n")]=0;
    printf("enter pincode\n");
    scanf("%d",&s1.pincode);
    printf("name is :%s\n",s1.name);
    printf("address is:%s\n",s1.address);
    printf("pincode is:%d\n",s1.pincode);
    return 0;
}