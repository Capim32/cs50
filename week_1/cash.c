#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);



int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    if (quarters >= 1)
    {
        printf("give %i quarters to the customer \n", quarters);
    }

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    if (dimes >= 1)
    {
        printf("give %i dimes to the customer \n", dimes);
    }

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;
    if (nickels >= 1)
    {
        printf("give %i nickels to the customer \n", nickels);
    }

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;
    if (pennies >= 1)
    {
        printf("give %i pennies to the customer \n", pennies);
    }

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Total coins :");
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("how many cents the customer is owed? :");
    }
    while (cents < 1);

    return cents;

}

int calculate_quarters(int cents) // quarters = 25c
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters = quarters + 1;
    }

    return quarters;
}

int calculate_dimes(int cents) // dimes = 10c
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes = dimes + 1;
    }

    return dimes;
}

int calculate_nickels(int cents) // nickles = 5c
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels = nickels + 1;
    }
    return nickels;
}

int calculate_pennies(int cents) // pennies = 1c
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies = pennies + 1;
    }
    return pennies;
}
