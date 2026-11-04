/* Assignment 12 - Question 2
 * Check whether the number contains a zero digit. Zero itself contains zero.
 */
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    do
    {
        if (iNumber % 10 == 0)
        {
            return TRUE;
        }
        iNumber /= 10;
    } while (iNumber != 0);
    return FALSE;
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
    BOOL bRet = ChkZero(iValue);
    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}
