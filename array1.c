#include <stdio.h>
int main(int argc, char const *argv[])
{
    int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
    int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
    int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
    int bestgame = 0;
    int gameMark = 0;

    for (int i = 0; i < 10; i++)
    {
        if (gameScores[i] > bestgame)
        {
            bestgame = gameScores[i];
            gameMark = i;
        }
        
    }
    
    printf("The best game was %d\n", gameMark + 1);
    printf("scored %d points\n", gameScores[gameMark]);
    printf("rebounds : %d\n", gameRebounds[gameMark]);
    printf("assists : %d\n", gameAssists[gameMark]);



    return 0;
}

