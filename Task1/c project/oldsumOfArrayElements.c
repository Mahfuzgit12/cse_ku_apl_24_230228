#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

  
  
    

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array %d", sum);

    return 0;
}