#include <stdio.h>

int main() {
    int arr[100], size, i, j, minIndex, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort logic
    for(i = 0; i < size - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
