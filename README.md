------*  Jay Ganesh *------

#include <stdio.h>

int main(void)
{
    int n = 7;
    int i, j, row;

    printf("     ");
    for (i = 0; i < n; i++)
    {
        printf("/     ");
    }
    printf("\n");

    printf("    ");
    for (i = 0; i < n; i++)
    {
        printf("(     ");
    }
    printf("\n");

    printf("     ");
    for (i = 0; i < n; i++)
    {
        printf("6     ");
    }
    printf("\n");

    for (row = 0; row < n; row++)
    {
        for (j = 0; j < 4 + row * 3; j++)
        {
            printf(" ");
        }

        for (i = 0; i < n - row; i++)
        {
            printf("/ \\   ");
        }

        printf("\n");

        for (j = 0; j < 3 + row * 3; j++)
        {
            printf(" ");
        }

        for (i = 0; i < n - row; i++)
        {
            printf("/___\\ ");
        }

        printf("\n");
    }

    return 0;
}
