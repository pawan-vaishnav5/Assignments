/* Assignment 15 - Question 2
 * Check whether the input is strictly greater than 100.
 * The supplied two-output template prints Smaller for 100.
 */
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    return (iNo > 100) ? TRUE : FALSE;
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
    BOOL bRet = ChkGreater(iValue);
    printf("%s\n", bRet == TRUE ? "Greater" : "Smaller");
    return 0;
}
