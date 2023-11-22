#include <stdio.h>

// void externalMerge(int f[], int f1[], int f2[], int size);
void printF(int f[], int f1[], int f2[], int size);

int main()
{   
    int f[] = {23, 78, 92, 12, 56, 34, 22, 67, 88};
    int size = sizeof(f) / sizeof(f[0]);
    int f1[size]; 
    int f2[size];

    // externalMerge(f, &f1, &f2, size);
    printF(f, f1, f2, size);


    

    for (int i = 0; i < size; i++)
    {
        f1[0] = f[0];        
        if (f[i + 1] > f1[i])
        {
            f1[i + 1] = f[i + 1];
        }        

        else
        {
            f2[0] = f[i + 1];
            for (int j = i; j < size; j++)
            {
                if (f[j + 2] > f[j])
                {
                    f2[j] = f[j];
                }
                
            }
            
        }
        
    }

    
    

    return 0;
}


// void externalMerge(int f[], int f1[], int f2[], int size)
// {
//     f1[0] = f[0];

//     for (int i = 0; i < size; i++)
//     {        
//         if (f[i + 1] > f[i])
//         {
//             f1[i] = f[i];
//         }

//         else
//         {
//             f2[i] = f[i];
//             for (int j = i; j < size; j++)
//             {
//                 if (f[j + 1] > f[j])
//                 {
//                     f2[j] = f[j];
//                 }
                
//             }
            
//         }
        
//     }
    
// }





void printF(int f[], int f1[], int f2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", f[i]);        
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {        
        printf("%d ", f1[i]);        
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {        
        printf("%d ", f2[i]);
    }
}