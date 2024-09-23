#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isValidInput(int n);
int calculateSumOfOddNumbers(int upperLimit);

int main()
{
    int n, sum;

    // Prompt the user to enter the upper limit
    printf("Enter a positive upper limit: ");
    while (scanf("%d", &n) != 1 || !isValidInput(n)) {
        // Clear the input buffer
        while (getchar() != '\n');  
        printf("Invalid input. Please enter a positive integer: ");
    }

    // Calculate the sum of odd numbers
    sum = calculateSumOfOddNumbers(n);

    // Display the result
    printf("Sum of odd numbers from 1 to %d = %d\n", n, sum);

    return 0;
}

// Function to validate the input
bool isValidInput(int n) {
    return n > 0;
}

// Function to calculate the sum of odd numbers up to a given limit
int calculateSumOfOddNumbers(int upperLimit) {
    int sum = 0;
    for (int i = 1; i <= upperLimit; i += 2) {
        sum += i;
    }
    return sum;
}
