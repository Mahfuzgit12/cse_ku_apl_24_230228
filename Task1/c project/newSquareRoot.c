#include <stdio.h>

int main()
{
    double num, root, guess;

    // Input from user
    printf("Enter any number to find the square root: ");
    scanf("%lf", &num);

    // Initial guess for the square root
    guess = num / 2.0;

    // Iterate to improve the guess (Babylonian method)
    for (int i = 0; i < 20; i++)  // More iterations yield a more accurate result
    {
        guess = (guess + num / guess) / 2.0;
    }

    root = guess;

    // Display the result
    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}
