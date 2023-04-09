#include <stdio.h>
int multiply_number();
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello Your name is: %s\n", name);
    return 0;
}

int multiply_number(int first_number, int second_number)
{
    return first_number * second_number;
}