#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main (void)

{
    int cents ;
    do
    {
     cents = get_int("Change owed (in cents): ");
    }
    while (cents < 0);
    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
     // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);
     printf("Quarters: %i\n", quarters);


     // Calculate how many dimes you should give customer
     int dimes = calculate_dimes(cents);
     // Subtract the value of those dimes from cents
     cents = cents - (dimes * 10);
     printf("Dimes: %i\n", dimes);

     // Calculate how many dimes you should give customer
     int nickels = calculate_nickels(cents);
     // Subtract the value of those dimes from cents
     cents = cents - (nickels * 5);
     printf("Nickels %i\n", nickels);

     // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those dimes from cents
    cents = cents - (pennies * 1);
    printf("Pennies %i\n" , pennies);

     // Calculate total coins
    int total = quarters + dimes + nickels + pennies;
    printf("Total coins: %i\n", total);


}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}


int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while(cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while(cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

