#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int age;
        char name[20];
        float marks;
    };
    struct student s1={20,"sunitha",86};
    struct student *ptr=&s1;
    printf("name is :%s\n",s1.name);
    printf("age is:%d\n",s1.age);
    printf("marks is:%.2f\n",s1.marks);
    return 0;
}