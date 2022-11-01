#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; // Define Height

    do
    {
        height = get_int("height: "); // Ask User
    }
    while(height < 1); // While Height Less Than 1 --> Ask Again

    for (int rows = 0; rows < height; rows++) // Creating rows till reaching desired height
    {
        for (int blanks = height - rows; blanks >= 0; blanks --) // Usign blanks for left aligning blocks.
        {
            printf(" ");
        }
        for(int bricks = 0; bricks <= rows; bricks++) // Filling rows with bricks.
        {
            printf("#");
        }
        printf("\n"); // Step on new row.
    }
}
