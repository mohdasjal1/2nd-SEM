#include <stdio.h>

long factorial(int n)
{
    if(n == 1)
      return(1);
    else
      return(n * factorial(n - 1));
}

int main()
{     
    int n;
    printf("enter a num : ");
    scanf("%d", &n);
    int L = factorial(n);
    printf("%d", L);


    return 0;
}


// #include <stdio.h>

// int sum(int n)
// {
//   if(n == 1)
//    return(1);
//   else
//    return(n + sum(n-1));
// }

// int main()
// {
//   int n = 5;
//   printf("sum of n = %d", sum(n));
//   return 0;
// }
