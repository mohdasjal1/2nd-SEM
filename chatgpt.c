#include <stdio.h>
#include <ctype.h> // Include this for the toupper function

int main(int argc, char const *argv[])
{
    int movieRatings[9];
    char ans;
    int ctr = 0; // Initialize ctr

    char *movies[9] = {
        "Amour", "Argo",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Les Miserables",
        "Life of Pi", "Lincoln",
        "Silver Linings Playbook",
        "Zero Dark Thirty"};

    printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
    printf("Time to rate this year's best picture nominees: \n");

    for (int i = 0; i < 9; i++)
    {
        printf("Did you see %s ? (Y/N) : ", movies[i]);
        scanf(" %c", &ans);

        if (toupper(ans) == 'Y')
        {
            printf("\nWhat was your rating on a scale of 1 - 10 : ");
            scanf(" %d", &movieRatings[i]);
            ctr++;
        }
        else
        {
            movieRatings[i] = -1;
        }
    }

    char *tempMovie;
    int tempRating;

    // Bubble sort
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (movieRatings[i] < movieRatings[j])
            {
                tempMovie = movies[i];
                movies[i] = movies[j];
                movies[j] = tempMovie;

                tempRating = movieRatings[i];
                movieRatings[i] = movieRatings[j];
                movieRatings[j] = tempRating;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("Movie : %s\nRating : %d\n\n", movies[i], movieRatings[i]);
    }
    

    return 0;
}
