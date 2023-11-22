#include <stdio.h>

int main()
{
    int movieRatings[9];
    char ans;
    int ctr = 0;
    
    char * movies[9] = {"Amour", "Argo",
                        "Beasts of the Southern Wild",
                        "Django Unchained",
                        "Les Miserables",
                        "Life of Pi", "Lincoln",
                        "Silver Linings Playbook",
                        "Zero Dark Thirty"};


    printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
    printf("Time to rate this year's best picture nominees: \n");

    

    for(int i = 0; i < 9; i++)
    {
        printf("Did you saw %s ? (Y/N) : ",movies[i]);
        scanf(" %c", &ans);

        if(toupper(ans) == 'Y')
        {
            printf("\nWhat was your rating on a scale of 1 - 10 : ");
            scanf(" %d", &movieRatings[i]);
            ctr ++;
            continue;

        }

        else
        {
            movieRatings[i] = -1;
        }
        
    }

    
    char *tempMovie /*=  "This will be used to sort rated movies"*/;
    int tempRating, didswap;


    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            didswap = 0;
            if (movieRatings[i] < movieRatings[j])
            {
                tempMovie = movies[i];
                movies[i] = movies[j];
                movies[j] = tempMovie;

                tempRating = movieRatings[i];
                movieRatings[i] = movieRatings[j];
                movieRatings[j] = tempRating;
                didswap = 1;

            } 
        }
        if (didswap == 0)
        {
            break;
        }
        

    }


    for (int i = 0; i < ctr; i++)
    {
        printf("Movie : %s\nRAting : %d\n\n", movies[i], movieRatings[i]);
    }


    

                        





    return 0;
}
