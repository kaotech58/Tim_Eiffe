// Author: Timothy Eiffe
// Purpose: Correctly guess a number between 0 and 20 in a maximum of 5 tries
// Date: 04/06/2021

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main()
{
    
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 5;
    time_t t;

    //initialization of random number generator
    srand((unsigned)time(&t));

    //get the random number
    randomNumber = rand() % 21;

    printf("This is a guessing game.\nI have chosen a number between 0 and 20, which you must guess.\n");
    
        for (numberOfGuesses = 5; numberOfGuesses >= 1; --numberOfGuesses)
        {
            printf("\nyou have %d tr%s left.\nEnter a guess: ", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies"); //will print tries if their are more than 1 tries and will print try when their is only 1 try left
            scanf("%d", &guess);

            if (guess == randomNumber)
            {
                printf("Congratulations, You guessed it!\n");
                return 0;
            }
            else if (guess < 0 || guess > 20) //checking for invalid number.
            {
                printf("That number is not between 0 and 20, please try again.\n");
            }
            else if (guess < randomNumber)
            {
                printf("Sorry, %d is wrong. My number is greater than that\n", guess);
            }
            else
            {
                printf("Sorry, %d is wrong. My number is less than that\n", guess);
            }
        }
        printf("\nMy number was %d, Better luck next time.", randomNumber);

        return 0;
}
