/* Assignment 12 - Question 1
 * Display digits in reverse order, one digit per line; ignore the sign.
 * Zero is a single digit.
 */
#include <stdio.h>

void DisplayDigit(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    do
    {
        int iDigit = (int)(iNumber % 10);
        printf("%d\n", iDigit);
        iNumber /= 10;
    } while (iNumber != 0);
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
    DisplayDigit(iValue);
    return 0;
}
