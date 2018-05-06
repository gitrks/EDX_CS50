#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // declaring my variables
    int height;
    int rows;
    int space;
    int hash;

    // prompts user for integer until integer is 0 to 23
    do
    {
        printf("Welcome to Mario! Please choose a height from 0 to 23:");
        height = get_int();
    }
    while ((height < 0) || (height > 23));

    // this is the loop that will create the number of rows in the pyramid entered by the user
    for (rows = 1; rows <= height; rows++)
    {
        for (space = (height - rows); space > 0; space--)
        {
            printf(" ");
        }

        for (hash = 0; hash <= rows; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}