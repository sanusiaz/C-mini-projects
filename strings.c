
/**
 * @package C
 * Program to get users first name and last name 
 * From different inputs
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // strings are sequences of characters 
    char firstname[30];
    char lastname[30];

    do
    {
        // get users name
        printf("Enter your first name: ");
        scanf("%s", &firstname);
    }
    while(strlen(firstname) < 1 || strlen(firstname) > 20);


    do
    {
        // get users name
        printf("Enter your last name: ");
        scanf("%s", &lastname);
    }
    while(strlen(lastname) < 1 || strlen(lastname) > 20);

    printf("Your fullname is: %s %s", firstname, lastname);

    return 0;
}