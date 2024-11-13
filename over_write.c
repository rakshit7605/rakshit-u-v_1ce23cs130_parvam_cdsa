#include<stdio.h>
int main()
{
    FILE*file=fopen("hello.txt","w");
    if(file==NULL)
    {
        perror("error opening file");
        return 1;
    }
    fprintf(file,"this is the file\n");
    fprintf(file,"writingto the file wile overwrite its contents.\n");
    fclose(file);
    printf("file writen successfully in write mode.\n");
    return 0;
}