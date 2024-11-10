#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int age;
        char name[20];
        float marks;
    };
    struct student s1
    printf("enter the name of the student:);
    scanf("name is %s\n",s1.name);
    printf("enter the age of the student:");
    scanf("%d\n",s1.age);
    printf("enter the marks");
    scanf("%.2f",s1.marks);
    return 0;
}
}