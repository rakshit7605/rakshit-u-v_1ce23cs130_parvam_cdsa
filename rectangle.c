// Online C compiler to run C program online
#include <stdio.h>
void rectangle()
{
    float area;
    float l,b,h;
    printf("enter the lenght,breadth,height:");
    scanf("%f %f %f",&l,&b,&h);
    area=l*b*h;
    printf("%f",area);
}
int main()
{
     rectangle();

}