// ***********[METHOD 1 (my preference)]*********************************************************************************************

// #include <stdio.h>

//     struct Point
//     {        
//         int x;
//         int y;
//     }p1, p2;

// int main()
// {
//     printf("Enter value of x at p1 : ");
//     scanf("%d", &p1.x);

//     printf("Enter value of x at p2 : ");
//     scanf("%d", &p2.x);
    
//     printf("Enter value of y at p1 : ");
//     scanf("%d", &p1.y);
    
//     printf("Enter value of y at p2 : ");
//     scanf("%d", &p2.y);
    
//     // p1.x = 3;
//     // p1.y = 2;

//     // p2.x = 3;
//     // p2.y = 2;

//     printf("x at p1 : %d\ny at p1 : %d\n\n",p1.x, p1.y);
//     printf("x at p2 : %d\ny at p2 : %d",p2.x, p2.y);

//     return 0;
// }


// ***********(METHOD 2)*********************************************************************************************

// #include <stdio.h>


//     struct Point
//     {        
//         int x;
//         int y;
//     };

// int main()
// {
//     struct Point p1, p2;
//     p1.x = 3;
//     p1.y = 2;

//     p2.x = 3;
//     p2.y = 2;

//     printf("x at p1 : %d\ny at p1 : %d\n\n",p1.x, p1.y);
//     printf("x at p2 : %d\ny at p2 : %d",p2.x, p2.y);

//     return 0;
// }



// ***********(METHOD 3)*********************************************************************************************
// #include <stdio.h>

//     typedef struct 
//     {        
//         int x;
//         int y;
//     }Point;

// int main()
// {
//     Point p1, p2;
//     p1.x = 3;
//     p1.y = 2;

//     p2.x = 3;
//     p2.y = 2;

//     printf("x at p1 : %d\ny at p1 : %d\n\n",p1.x, p1.y);
//     printf("x at p2 : %d\ny at p2 : %d",p2.x, p2.y);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct DatePAK {
    int dd;
    int mm;
    int yy;
};

struct DateIND {
    int dd;
    int mm;
    int yy;
};

struct CountryInfo {
    char name[10];
    int pop;
    char capital[10];
    struct DatePAK doipk;
    struct DateIND doiind;
};

int main() {
    char name[10];
    
    struct CountryInfo pak, ind;

    strcpy(pak.capital, "Islamabad");
    pak.pop = 20000;

    strcpy(ind.capital, "Mumbai");
    ind.pop = 80000;

    printf("Enter Country name: ");
    scanf("%s", name);

    if (strcmp(name, "pakistan") == 0) {
        printf("%s's Capital is: %s\nPopulation is: %d\n", name, pak.capital, pak.pop);
    } else {
        printf("%s's Capital is: %s\nPopulation is: %d\n", name, ind.capital, ind.pop);
    }

    return 0;
}


