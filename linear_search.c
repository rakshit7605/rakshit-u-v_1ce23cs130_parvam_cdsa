#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 0, 1, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5; 

    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
