#include <stdio.h>
void fun()
{
    static int i=0;
    printf("%d",i);
    i++;
}
int main()
{
    for(int j=0;j<3;j++)
    {
        fun();
    }
return 0;
}
