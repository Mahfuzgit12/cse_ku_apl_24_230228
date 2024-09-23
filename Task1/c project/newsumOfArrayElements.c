#include <stdio.h>
#define MAX_SIZE 100

// Function prototypes
int getArraySize();
void getArrayElements(int arr[], int size);
int calculateSum(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int n, sum;

    // Get the size of the array
    n = getArraySize();

    // Get elements of the array
    getArrayElements(arr, n);

    // Calculate the sum of array elements
    sum = calculateSum(arr, n);

    // Display the result
    printf("Sum of all elements of the array = %d\n", sum);

    return 0;
}

// Function to get the size of the array with validation
int getArraySize()
{
    int size;

    printf("Enter size of the array (1 to %d): ", MAX_SIZE);
    while (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) {
        // Clear the input buffer
        while (getchar() != '\n');  
        printf("Invalid input. Please enter a valid array size (1 to %d): ", MAX_SIZE);
    }

    return size;
}

// Function to get elements of the array
void getArrayElements(int arr[], int size)
{
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        while (scanf("%d", &arr[i]) != 1) {
            // Clear the input buffer
            while (getchar() != '\n');  
            printf("Invalid input. Please enter an integer: ");
        }
    }
}

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
