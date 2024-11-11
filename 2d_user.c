#include<stdio.h>
 int main(){
    int row,col;
    printf("enter the row:");
 scanf("%d",&row);
 printf("enter the column:");
 scanf("%d",&col);
 int a[row][col];
 for(int i=0;i<row;i++)
 {
    for(int j=0;j<col;j++)
    {
        printf("enter the elements :");
        scanf("%d", &a[i][j]);
    
    }
   
 }
       printf("the array elements are:");
 for(int i=0;i<row; i++)
 {
    for(int j=0;j<col;j++)
    {
  
        printf("%d", a[i][j]);
    }
    printf("\n");
 }
 return 0;
 }
 
 