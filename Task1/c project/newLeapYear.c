#include <stdio.h>

int main()
{
    int year;

    // Prompt user to enter a year
    printf("Enter any year: ");
    while (scanf("%d", &year) != 1 || year <= 0) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input. Please enter a positive integer for the year: ");
    }

    // Check if the entered year is a leap year or a common year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a LEAP YEAR\n", year);
    } else {
        printf("%d is a COMMON YEAR\n", year);
    }

    return 0;
}
