/*
Number Guessing Game

In this project, we will build a simple Number Guessing Game using loops, conditional statements,
and a random number generator.

The program generates a random number and asks the player to guess it.

If the player's guess is greater than the actual number, the program should display:
Lower number please

Similarly, if the user's guess is smaller than the actual number, the program should display:
Higher number please

The game should continue until the player guesses the correct number.
Once the correct number is guessed, the program should display the total number of guesses taken by
the player */

/*
Hint
Use a loop along with a random number
generator to repeatedly compare the user's
guess with the actual number */

/*
=== NUMBER GUESSING GAME ===
I have generated a number between 1 and 100.
Can you guess it?
Enter your guess: 50
Higher number please
Enter your guess: 75
Lower number please
Enter your guess: 65
Congratulations! You guessed the number 65
in 3 attempts
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("=============== NUMBER GUESSING GAME ====================\n");
    printf("I have generated a number between 1 and 100.\nCan you guess it?\n");

    srand(time(NULL));
    int min = 1;
    int max = 100;
    int randnum = rand() % (max - min+1) + min;

    int user;
    printf("Guess Number: ");
    scanf("%d", &user);

    int attempt = 1;

    while (randnum != user)
    {
        if (randnum < user)
        {
            printf("LOL! Guess Lower Number.\n");
        }
        else 
        {
            printf("LOL! Guess Higher Number.\n");
        }

        printf("Guess Number again: ");
        scanf("%d", &user);
        attempt++;
    }
    printf("Congratulations! You guessed the number %d in %d attempts!", randnum, attempt);

    return 0;
}
