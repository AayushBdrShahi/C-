#include<stdio.h>

int main() {
    int size, i;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without duplicates: ");
    for (i = 0; i < size; i++) {
        int duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}