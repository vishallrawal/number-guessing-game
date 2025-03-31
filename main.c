#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialization random number generator
    srand(time(0));

    // generate random no netween 1 to 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // print the random number
    //  print ("random number : %d\n", randomnumber);

    do
    {
        printf("Guess the number");
        scanf("%d", & guessed_number);
        if(guessed_number>randomnumber){
            printf("Lower number please!\n");
        }
        else if (guessed_number<randomnumber){
            printf("Higher number please!\n");
        }
            else{
                printf("congrats!!\n");
            }
            no_of_guesses++;

    } while (guessed_number != randomnumber);
    printf("you guessed the number in %d guesses", no_of_guesses);

return 0;
    }