/* Assignment 7 - Question 2
 * Print the integers from 1 through N. N <= 0 prints an empty line.
 */

#include <stdio.h>

void Display(int iNo)
{
    for (long long iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%lld ", iCnt);
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

    Display(iValue);
    return 0;
}
