#include <stdio.h>
#include <string.h>

struct DatePAK
    {
        int dd;
        int mm;
        int yy;
    };

struct DateIND
    {
        int dd;
        int mm;
        int yy;
    };        

int main()
{
    char name[10];
    struct DatePAK doipk;
    {
        doipk.dd;
        doipk.mm;
        doipk.yy;
    };

    struct DateIND doiind;
    {
        doiind.dd;
        doiind.mm;
        doiind.yy;
    };
    
    struct CountryInfo
    {
        char name[10];
        int pop;
        char capital[10];   
        struct DatePAK doipk;
        struct DateIND doiind;

    }pak, ind;

    

    pak.doipk.dd = 14;
    pak.doipk.mm = 8;
    pak.doipk.yy = 1947;

    ind.doiind.dd = 15;
    ind.doiind.mm = 8;
    ind.doiind.yy = 1947;
    
    
    pak.pop = 20000;
    strcpy(pak.capital, "Islamabad");

    ind.pop = 80000;
    strcpy(ind.capital, "Mumbai");

    printf("Enter Country name : ");
    scanf("%s",&name);
    printf("Country name is : %s\n\n", name);


    if (strcmp(name, "pakistan") == 0 )
    {
        printf("%s's Capital is : %s\nPopulation is : %d\n DOI is : %d - %d - %d", name, pak.capital, pak.pop, pak.doipk.dd, pak.doipk.mm, pak.doipk.yy);        
    }
    
    else
    {
        printf("%s's Capital is : %s\nPopulation is : %d\n DOI is : %d - %d - %d", name, ind.capital, ind.pop, ind.doiind.dd, ind.doiind.mm, ind.doiind.yy);
    }
    

    return 0;
}
