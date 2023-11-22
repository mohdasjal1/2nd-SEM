#include <stdio.h>
#include <string.h>
main(){

    int custID[10] = {313, 453, 502, 101, 892,
                      475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08,
                     192.41, 389.00, 229.67, 18.31, 59.54};

    int i, searchID;                 
    int found = 0;

    printf("Enter the ID you want to check\n");
    scanf("%d", &searchID);

    for ( i = 0; i < 10; i++)
    {
        if (searchID == custID[i])
        {
            found = 1;
            break;
        }
        
    }

    if (found)
    {
        if (custBal[i] > 100)
        {
            printf("\n** That customer's balance is $%.2f.\n", custBal[i]);
            printf(" No additional credit.\n");

        }

        else
        {
            printf("\n** The customer's credit is good!\n");
        }
        
    }

    else
    {
        printf("** You must have typed an incorrect customer ID.");
        printf("\n ID %3d was not found in list.\n", searchID);
    }
    
    

    



return 0;
}