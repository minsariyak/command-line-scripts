#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coinCount = 0;
    float change;

    do
    {
        //promting user for change amount
        change = get_float("Enter change amount: \n");
    }
    //validating input
    while (change <= 0);

    //converting to cents
    change = round(change *= 100);

    while (change >= 25)
    {
        change -= 25;
        coinCount++;
    }

    while (change >= 10)
    {
        change -= 10;
        coinCount++;
    }

    while (change >= 5)
    {
        change -= 5;
        coinCount++;
    }

    while (change >= 1)
    {
        change -= 1;
        coinCount++;
    }

    //outputting results
    printf("%i \n", coinCount);
}