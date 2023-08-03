#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the number to search for: ");
    scanf("%d", &key);

    int result = linearSearch(arr, size, key);
    if (result != -1) {
        printf("Number %d found at index %d.\n", key, result);
    } else {
        printf("Number %d not found in the array.\n", key);
    }

    return 0;
}

