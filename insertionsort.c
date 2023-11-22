#include <stdio.h>

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int arr[] = {5, 4, 10, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array : ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("\nSorted Array : ");
    printArray(arr, size);    
        
    return 0;
}


void insertionSort(int arr[], int size)
{
    int temp;
    int j;

    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
        
    }    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}