/* Assignment 11 - Question 5
 * Display the inclusive range in reverse order.
 * Reject ranges whose starting point exceeds the ending point.
 */
#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    for (long long iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%lld ", iCnt);
    }
    printf("\n");
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    RangeDisplayRev(iValue1, iValue2);
    return 0;
}
