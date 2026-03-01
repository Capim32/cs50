#include <cs50.h>
#include <stdio.h>

void makePyramid(int size);

// mario - more
int main()
{
    int size;
    do
    {
        size = get_int("pyramid size: ");
    }
    while (size > 8 || size < 1);

    makePyramid(size);
}

void makePyramid(int size)
{
    // left pyramid
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // gap
        printf("  ");

        // right pyramid
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}
