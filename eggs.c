
/**
 * @package C
 * A simple package to show the number of dozens sold in a day
 */

#include <stdio.h>

int main()
{
    int eggs;
    printf("Enter number of eggs sold in a day: ");
    scanf("%i", &eggs);

    // calculate the total number of eggs in dozen
    float sold_out_dozens = (float) eggs / 12;

    printf("Eggs (dozens) Sold out is %.2f", sold_out_dozens);

    return 0;
}