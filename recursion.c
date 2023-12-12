#include <stdio.h>

void print()
    {
        char c = getchar();
        if(c!='\n')
        {    
         printf("%c", c);
        }
        print();            
        return;
    }

int main()
{
    print();
    return 0;
}


// #include <stdio.h>

// void print()
//     {
//         char c = getchar();
//         if(c!='\n')
//         {
//          print();    
//          printf("%c", c);
//         }        
//         return;
//     }

// int main()
// {
//     print();
//     return 0;
// }












// #include <stdio.h>

// int sum(int n);

// int main()
// {
//     printf("sum is : %d", sum(5));
 
//     return 0;
// }


// int sum(int n)
// {
//     if(n == 1)
//     {
//         return n;
//     }
//     int sumNm1 = sum(n - 1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }