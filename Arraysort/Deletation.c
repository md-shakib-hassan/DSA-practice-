#include <stdio.h>

int main() {
    int arr[100], size, pos, i;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter elements of array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input position to delete
    printf("Enter position to delete (0 to %d): ", size - 1);
    scanf("%d", &pos);

    // Step 4: Check valid position
    if(pos < 0 || pos >= size) {
        printf("Invalid position!\n");
    } else {
        // Step 5: Shift elements to the left
        for(i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Step 6: Reduce array size
        size--;

        // Step 7: Print updated array
        printf("Array after deletion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
