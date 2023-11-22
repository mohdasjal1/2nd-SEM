#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int myArray[] = {38, 27, 43, 3, 9, 82, 10};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("Array before sorting: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }

    selectionSort(myArray, arraySize);

    printf("\nArray after sorting: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}
