#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int n)
{
    srand(time(NULL));
    return rand ()%n;
}

int greater (char char1, char char2)
{
    if ( char1 == char2)
    {
        return -1;
    }
    
    if ((char1 == 'r') && (char2== 's'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
    if ((char1 == 'p') && (char2== 'r'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
    
    if ((char1 == 's') && (char2== 'p'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}

int main()
{
    int playerscore=0, compscore=0, x;
    char playerchar, compchar;
    char game[] = {'r', 'p', 's'};
    printf ("Welcome to the game of rock, paper!!");
    for (int i=0; i<3; i++)
    {
        printf ("It is your turn!\n");
        printf ("Choose 1 for rock, 2 for paper and 3 for scissors\n");
        scanf ("%d", &x);
        getchar ();
        playerchar = game [x-1];
        printf ("You choose %c \n\n", playerchar);
        
        
        printf ("Computer's turn now!\n");
        x= random (3)+1;
        compchar = game [x-1];
        printf ("Computer choose %c!!\n\n", compchar);
        
        
        if (greater (compchar, playerchar)==1)
        {
            compscore +=1;
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore +=1;
            playerscore +=1;
        }
        else 
        {
            playerscore +=1;
        }
        printf ("Final score after this round are:\n");
        printf ("Your score:%d\n", playerscore);
        printf ("Computer score:%d\n\n", compscore);
        }
    
    if (playerscore> compscore)
    {
        printf ("You win this game!!");
    }
    else if (compscore> playerscore)
    {
        printf ("CPU won the game");
    }
    else 
    {
        printf ("This game is a draw!");
    }
    
    return 0;
}