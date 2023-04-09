
/**
 * @package C
 * A simple program to check if the triangle is valid 
 * based on the sides
*/

#include <stdio.h>

int main()
{
    int x,y,z;

    printf("Enter first triangle side: ");
    scanf("%i", &x);


    printf("Enter second triangle side: ");
    scanf("%i", &y);

    printf("Enter third triangle side: ");
    scanf("%i", &z);

    if ( ((x+y) >= z ) || ((x+z) >= y) || ((y+z) >= x ) )
    {
        printf("Triangle is valid with sides of %i,%i,%i ",x,y,z);
    }
    else
    {
        printf("Invalid Triangle");
        return 1;
    }

    return 0;
}