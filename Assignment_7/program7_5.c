/* Assignment 7 - Question 5
 * Print the first five multiples of N.
 */

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    for (int iCnt = 1; iCnt <= 5; iCnt++)
    {
        /* Convert before multiplying so the result can exceed the int range. */
        printf("%lld ", (long long)iNo * iCnt);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    MultipleDisplay(iValue);
    return 0;
}
