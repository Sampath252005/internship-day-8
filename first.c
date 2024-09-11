#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char choice;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                number = rand() % 100 + 1;  // Generate a new number
                attempts = 0;  // Reset attempt counter
                printf("I have selected a new number. Let's play again!\n");
            } else {
                printf("Thank you for playing!\n");
                break;
            }
        }
    } while (1);

    return 0;
}