#include <stdio.h>

int main()
{
    int nums[] = {3,2,1,};
    int size = sizeof(nums) / sizeof(nums[0]);
    int temp;
    int didSwap = 0;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        didSwap = 0;
        for ( int j = i; j < 10; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                didSwap = 1;
            }
            
        }

      if (didSwap == 0)
      {
        break;
      }
        
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
        
    return 0;
}
