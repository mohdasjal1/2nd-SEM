#include <stdio.h>

void findMaxMinAndIndices(int *max, int *min, int *maxInd, int *minInd, int size, int arr[]);

int main()
{
    int size;
    printf("Enter the no of elements : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements : ", size);    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int max, min, maxInd, minInd;
    findMaxMinAndIndices(&max, &min, &maxInd, &minInd, size, arr);
    printf("\n\nMaximum number is %d at index %d\n", max, maxInd);
    printf("Minimum number is %d at index %d\n", min, minInd);

    return 0;
}


void findMaxMinAndIndices(int *max, int *min, int *maxInd, int *minInd, int size, int arr[])
{
    *max = *min = arr[0];
    *maxInd = *minInd = 0;
    
    for (int i = 1; i < size; i++)
    {
        if(*max < arr[i])
        {
        *max = arr[i];
        *maxInd = i;
        }
        
        else if (*min > arr[i])
        {
            *min = arr[i];
            *minInd = i;
        }                        
    }
    
}