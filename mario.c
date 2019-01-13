#include <stdio.h>
#include <cs50.h>

int main()
{
    //get the height of the mario tower
    int height = get_int("What height do you want? (range 0 - 21) : ");
    while (height > 23 || height < 0)
    {
        height = get_int("What height do you want? (range 0 - 21) Try again! : ");
    }
    //set up for loops for lines base on height input
    for (int line = 0; line < height ; line ++)
    {
        //setting up spaces (first iteration line = 0)i
        for (int space = height - line - 1; space > 0; space --)
        {
            printf(" ");
        }
        //setting up hashes
        for (int hash = 0; hash < line + 1; hash ++)
        {
            printf("#");
        }
        //print space and remaining hash
        printf("  ");
        for (int hash = 0; hash < line + 1; hash ++)
        {
            printf("#");
        }
        printf("\n");
    }
}