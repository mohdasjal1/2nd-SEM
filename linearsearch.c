#include <stdio.h>

int linearSearch(int size, int arr[], int target);


int main()
{
    int arr[] = {3, 5, 8, 1, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = linearSearch(size, arr, target);
    
    if (result != -1)
    {
        printf("Element %d is found at index %d", target, result);
    }

    else
    {
        printf("Element not found");
    }
    
    

    return 0;
}


int linearSearch(int size, int arr[], int target)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}




// #include <stdio.h>

// void merge(int arr[], int left, int mid, int right) {
//     int i, j, k;
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     // Create temporary arrays
//     int L[n1], R[n2];

//     // Copy data to temporary arrays L[] and R[]
//     for (i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];

//     // Merge the temporary arrays back into arr[left..right]
//     i = 0;  // Initial index of first subarray
//     j = 0;  // Initial index of second subarray
//     k = left;  // Initial index of merged subarray
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of L[], if there are any
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of R[], if there are any
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         // Same as (left + right) / 2, but avoids overflow
//         int mid = left + (right - left) / 2;

//         // Sort first and second halves
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         // Merge the sorted halves
//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int myArray[] = {38, 27, 43, 3, 9, 82, 10};

//     int arraySize = sizeof(myArray) / sizeof(myArray[0]);

//     printf("Array before sorting: ");
//     for (int i = 0; i < arraySize; i++) {
//         printf("%d ", myArray[i]);
//     }

//     mergeSort(myArray, 0, arraySize - 1);

//     printf("\nArray after sorting: ");
//     for (int i = 0; i < arraySize; i++) {
//         printf("%d ", myArray[i]);
//     }

//     return 0;
// }
