#include <stdio.h>
#include<string.h>

void swapStrings(char *str1, char *str2) {
    char temp[100]; 

    
    int i = 0;
    while (str1[i] != '\0') {
        temp[i] = str1[i];
        i++;
    }
    temp[i] = '\0';

    
    i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    
    i = 0;
    while (temp[i] != '\0') {
        str2[i] = temp[i];
        i++;
    }
    str2[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    if ((strlen(str1) > 0) && (str1[strlen(str1) - 1] == '\n'))
        str1[strlen(str1) - 1] = '\0';
    if ((strlen(str2) > 0) && (str2[strlen(str2) - 1] == '\n'))
        str2[strlen(str2) - 1] = '\0';

    
    printf("Before swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    
    swapStrings(str1, str2);


    printf("After swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}