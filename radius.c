#include <stdio.h>

float PI = 3.142857;

int main()
{
    int radius;
    printf("Enter the radius of a circle: ");
    scanf("%i", &radius);


    // area formula
    float area = PI *  ( (float)  radius *(float)  radius );

    printf("Calculated Area of a circle with radius of %i: is %.2f", radius, area);
}