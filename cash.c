#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents = get_int("change owed: ");

    // Prompt the user for change owed, in cents
    while (cents < 0)
    {
        cents = get_int("enter a positive number: ");
    }

    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }

    // Calculate how many dimes you should give customer
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }

    // Calculate how many nickels you should give customer
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }

    // Calculate how many pennies you should give customer
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }

    // Print that sum
    printf("%i\n", pennies + nickels + quarters + dimes);
}
