/* Assignment 10 - Question 5
 * Convert square feet to square meters using the stated factor 0.0929.
 * With this factor: 5 gives 0.464500 and 7 gives 0.650300.
 */
#include <stdio.h>
#include <math.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main(void)
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    if (scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Invalid numeric input.\n");
        return 1;
    }
    if (iValue < 0)
    {
        fprintf(stderr, "Invalid value. Enter a valid nonnegative measurement.\n");
        return 1;
    }

    dRet = SquareMeter(iValue);
    printf("Area in square meters: %.6f\n", dRet);
    return 0;
}
