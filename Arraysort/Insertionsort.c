#include <stdio.h>

int main() {
    int arr[100], size, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < size; i++) {
        temp = arr[i];      
        j = i - 1;
        
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
