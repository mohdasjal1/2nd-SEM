#include <stdio.h>

print(int current, int n)
{
    if (current > n)
    {
        return; 
    }

    printf("%d", current);

    print(current + 1, n);    
}

int main()
{
    int current = 1;
    int n = 90;
    print(current, n);
    return 0;
}
