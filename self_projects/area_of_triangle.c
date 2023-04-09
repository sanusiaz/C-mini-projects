/**
 * @package C
 * 
 * Calculate Area of triangle
*/

#include <stdio.h>

int main()
{

    float base;
    float height;

    double result;

    // Base
    printf("Enter Base of the triangle: ");
    scanf("%f", &base);

    // Height
    printf("Enter Height of the triangle: ");
    scanf("%f", &height);


    // calculation here
    result = ( float ) ( 0.5 ) * ( base * height );

    printf("Calculated Area of triangle is: %.2f", result);
    return 0;
}