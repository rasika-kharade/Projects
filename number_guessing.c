#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    int number, guess;

    srand(time(0));       
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100: ");

    while (1) {
        scanf("%d", &guess);

        if (guess == number) {
            printf("Correct! You guessed it.\n");
            break;
        } else if (guess < number) {
            printf("Too low. Try again: ");
        } else {
            printf("Too high. Try again: ");
        }
    }

    return 0;
}
