#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void guess_the_number()
{
    int num, guess, attempt=0;
    char playAgain;

    srand(time(0));    

    do
    {
        num = (rand() % 100) + 1;
        attempt = 0;

        printf("I have guessed a number(1-100). Can you guess it?\n");

        do
        {
            printf("Enter your guess : \n");
            scanf("%d", &guess);
            attempt++; 

            if(guess > num)
                printf("Your guess is high. Try again.\n\n");
            else if(guess < num)
                printf("Your guess is low. Try again.\n\n");
            else
            {
                printf("\nCONGRATS!, your guess (%d) is correct. You have guessed correctly in %d attempts.\n\n", guess, attempt);
            }
        } while (guess != num);

        printf("Would you like to play again?(y/n)\n");
        scanf(" %c", &playAgain);
        printf("\n");

    } while(playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");    
        
}

int main()
{
    printf("\n==== WELCOME TO GUESS THE NUMBER GAME ===\n\n");
    guess_the_number();    

    return 0;
}