#include <stdio.h>

int main()
{
    // Declare variables
    float base, height, area;

    // Input the base of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    // Input the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area using the formula: (base * height) / 2
    area = (base * height) / 2;

    // Display the result
    printf("Area of the triangle = %.2f sq. units", area);

    return 0;
}
