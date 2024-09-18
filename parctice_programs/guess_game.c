#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    /* 
    
        here we will make a number guessing game,
        where the user will guess a number between 1 to 100.
    
     */

    // declaring the min & max number the user can guess.

    const int MIN = 1;
    const int MAX = 100;
    
    // declaring variables to keep track of the guess and answer.

    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    guess = (rand()% MAX )+ MIN ;


    do
    {
        printf("Enter a # between 1 to 100: \n");
        scanf("%d",&answer);
        if (answer > guess)
        {
            printf("Too high\n");
        }
        else if (answer < guess)
        {
            printf("Too low\n");
        }
        else{
            printf("correct !\n");
        }

        guesses++ ;

    } while (guess != answer);


    
    printf("----------------------------\n");
    printf("Total Guesses: %d\n ", guesses);
    printf("Answer: %d\n ", answer);
    printf("----------------------------\n");

    return 0;
}
