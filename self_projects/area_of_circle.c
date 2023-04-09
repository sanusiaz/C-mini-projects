/**
 * @package C
 * 
 * Calculate the area of a circle
*/

#include <stdio.h>

int main() 
{
    double PI = 3.143857;
    float radius;

    printf("Enter radius of a circle: ");
    scanf("%f", &radius);

    double result = PI * ( radius * radius );

    printf("Area of the circle is: %.2f", result);
    return 0;
}