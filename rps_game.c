#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;

    // Seed random number generator
    srand(time(0));

    printf("Rock, Paper, Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");

    // User input
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice!\n");
        return 1;
    }

    // Computer randomly chooses 1-3
    compChoice = rand() % 3 + 1;

    // Show choices
    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[compChoice - 1]);

    // Decide winner
    if (userChoice == compChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && compChoice == 3) ||
               (userChoice == 2 && compChoice == 1) ||
               (userChoice == 3 && compChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
