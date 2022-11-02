#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height : "); // Get Height
    }
    while(height < 1);

    for(int row = 1; row <= height; row++) // Creating rows to fill
    {
        for(int blank_line= height - row; blank_line >= 0; blank_line--) // Adding Blank Lines
        {
            printf(" ");
        }
        for(int brick = 0; brick <= row; brick++) // Filling Rows before dot with bricks
        {
            printf("#");
        }
        printf("."); // Dot between bricks.
        for(int brick = 0; brick <= row; brick++) // Filling Rows after dot with bricks.
        {
            printf("#");
        }
        printf("\n"); // Step up to new line.
    }
}