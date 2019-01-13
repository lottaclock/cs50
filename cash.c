//cash

#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    // recieve currency in dollar
    float n;
    do
    {
        n = get_float("Please insert your dollar input: ");
    }
    while( n < 0);
    //conversion of dollar to cents
    n = roundf(n*100);
    int cents = n;

    //time to count coins needed 25c, 10c, 5c, 1c
    int count=0;

    while (cents >= 25)
    {
        cents -= 25;
        count++;
    }
    while (cents >=10)
    {
        cents -= 10;
        count++;
    }
    while (cents >=5)
    {
        cents -= 5;
        count++;
    }
    while (cents >=1)
    {
        cents -= 1;
        count++;
    }
    printf("\nYour change is in %i coins\n", count);


}