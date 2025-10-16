#include <stdio.h>

int main() {
    long long card_number; // To store the card number
    int num_digits = 0; // To count the number of digits

    // Loop to ensure 16-digit card number input
    do {
        printf("Please enter your 16-digit card number: ");
        scanf("%lld", &card_number);

        // Reset digit count for each input
        num_digits = 0;
        long long temp_number = card_number;

        // Count the number of digits in the input
        while (temp_number > 0) {
            temp_number /= 10;
            num_digits++;
        }

        // Check if the number of digits is exactly 16
        if (num_digits != 16) {
            printf("Invalid card number! It must be 16 digits.\n");
        }

    } while (num_digits != 16); // Repeat until a valid 16-digit number is entered

    int digits[16]; // Array to store the digits of the card
    int sum = 0;

    // Extract digits of the card and store them in the array
    long long temp_number = card_number;
    for (int i = 0; i < 16; i++) {
        digits[i] = temp_number % 10;
        temp_number /= 10;
    }

    // Step 1: Multiply every second digit (from right) by 2
    for (int i = 1; i < 16; i += 2) {
        digits[i] *= 2;
        // If the result is greater than 9, subtract 9
        if (digits[i] > 9) {
            digits[i] -= 9;
        }
    }

    // Step 2: Add all the digits together
    for (int i = 0; i < 16; i++) {
        sum += digits[i];
    }

    // Step 3: Check if the total sum is divisible by 10
    if (sum % 10 == 0) {
        printf("The card is valid.\n");
    } else {
        printf("The card is invalid.\n");
    }

    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char card_number[20];  // For storing card number input as a string
    int num_digits = 0;
    int is_valid = 0;  // To check if the input is valid (only digits)

    // Loop to ensure valid 16-digit card number input
    do {
        printf("Please enter your 16-digit card number: ");
        scanf("%s", card_number);

        // Reset validity and digit count for each input
        is_valid = 1;
        num_digits = strlen(card_number);

        // Check if the input has exactly 16 digits
        if (num_digits != 16) {
            printf("Invalid card number! It must be 16 digits.\n");
            is_valid = 0;  // Set valid to false
        } else {
            // Check if all characters are digits
            for (int i = 0; i < num_digits; i++) {
                if (!isdigit(card_number[i])) {
                    printf("Invalid card number! It must contain only digits.\n");
                    is_valid = 0;  // Set valid to false
                    break;
                }
            }
        }

    } while (!is_valid);  // Repeat until valid 16-digit number is entered

    // Convert the string to a long long integer
    long long card_number_ll = 0;
    sscanf(card_number, "%lld", &card_number_ll);

    int digits[16];  // Array to store the digits of the card
    int sum = 0;

    // Extract digits of the card and store them in the array
    for (int i = 15; i >= 0; i--) {
        digits[i] = card_number_ll % 10;
        card_number_ll /= 10;
    }

    // Step 1: Multiply every second digit (from right) by 2
    for (int i = 1; i < 16; i += 2) {
        digits[i] *= 2;
        // If the result is greater than 9, subtract 9
        if (digits[i] > 9) {
            digits[i] -= 9;
        }
    }

    // Step 2: Add all the digits together
    for (int i = 0; i < 16; i++) {
        sum += digits[i];
    }

    // Step 3: Check if the total sum is divisible by 10


*/