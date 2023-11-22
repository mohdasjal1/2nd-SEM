#include <stdio.h>

int main(int argc, char const *argv[])
{
/* Defines the 10 elements in each of the parallel arrays */
int custID[10] = {313, 453, 502, 101, 892,
                  475, 792, 912, 343, 633};
float custBal[10] = { 0.00, 45.43, 71.23, 301.56, 9.08,
                  192.41, 389.00, 229.67, 18.31, 59.54};

int idSearch, tempID, tempBal, didSwap, i;
int found = 0;

for (i = 0; i < 9; i++)
{
    didSwap = 0;
    for (int j = i; j < 10; j++)
    {
        if (custID[i] > custID[j])
        {
            tempID = custID[i];
            custID[i] = custID[j];
            custID[j] = tempID;

            tempBal = custBal[i];
            custBal[i] = custBal[j];
            custBal[j] = tempBal;
            didSwap = 1;
        }
        
    }
    if (didSwap == 0)
    {
        break;
    }

    
    
}

    for (i = 0; i < 10; i++)
    {
        printf("%d ", custID[i]);
    }
    
    printf("\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", custBal[i]);
    }


    printf("\n ***********BALANCE CHECKER***********\nEnter your ID : ");
    scanf(" %d", &idSearch);

    for (i = 0; i < 10; i++)
    {
        // printf("%d", custID[i]);
        if (idSearch == custID[i])
        {
            found = 1;
            break;
            
        }

        if (custID[i] > idSearch)
        {
            break;
        }
        
        
    }

    if (found)
    {
        if (custBal[i] > 100)
        {
            printf("\nThe customer balance is : %.2lf\nNo additional credit.\n", custBal[i]);
        }

        else
        {
            printf("\nThe customer balance is : %.2lf\nLooks good..\n", custBal[i]);
        }
        
        
    }

    else
    {
        printf("** You have entered an incorrect customer ID.");
        printf("\n  ID %3d was not found in the list.\n", idSearch);

    }
    
    
    








    return 0;
}
