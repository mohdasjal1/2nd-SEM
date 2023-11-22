#include <stdio.h>

int main()
{
    int ctr, i, j, didSwap, temp;
    

    int nums[10] = {23, 56, 45 ,89,45,21,11,7,9,89};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
    }



    for (i = 0; i < 10; i++)
    {
        didSwap = 0;
        for ( j = i; j < 10; j++)
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


    
    
    







printf("\n");
for (int i = 0; i < 10; i++)
{
    printf("%d ", nums[i]);
}

    return 0;
}
