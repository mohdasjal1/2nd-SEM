#include <stdio.h>

int binarySearch(int arr[], int target, int size);

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 188, 244, 876};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 87;

    int result = binarySearch(arr, target, size);
    if (result != -1)
    {
        printf("Element %d is found at index %d", target, result );
    }

    else
    {
        printf("Element isn't in the list.");
    }
    


    return 0;
}


int binarySearch(int arr[], int target, int size)
{
    int L = 0;
    int R = size -1;
    int M;

    while (L <= R)
    {
        M = (L + R) / 2;
        if (target == arr[M])
        {               
            return M;
        }

        if(target > arr[M])
        {
            L = M + 1;
        }        
        
        else
        {
            R = M - 1;
        }        

    }
    
    return -1;
    
    
}