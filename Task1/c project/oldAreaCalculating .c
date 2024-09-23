#include<stdio.h>
int main()
{
    float base,height;
    scanf("%f", &base);
    scanf("%f", &height);
   float area = (base * height) / 2;
    printf("Area of the triangle = %.2f sq. units", area);

    return 0;
}