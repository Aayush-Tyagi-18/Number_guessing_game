#include <stdio.h>
// new header files
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); /* initiaization of random number generator*/

    // generate random numbers between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the Number ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower Number Please \n");
        }

        else if (guessed_number < randomNumber)
        {
            printf("Higher Number Please \n");
        }

        else
        {
            printf("Congrats!! Correct Guess \n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("You Guessed the Number in %d guesses", no_of_guesses);
    return 0;
}