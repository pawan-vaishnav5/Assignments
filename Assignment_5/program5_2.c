#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if (iYear % 400 == 0 ||
             (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    if (scanf("%d", &iYear) != 1)
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}