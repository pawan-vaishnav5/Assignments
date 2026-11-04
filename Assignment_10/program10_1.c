/* Assignment 10 - Question 1
 * Calculate circle area using PI = 3.14.
 */
#include <stdio.h>
#include <math.h>

double CircleArea(float fRadius)
{
    return 3.14 * (double)fRadius * fRadius;
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    if (scanf("%f", &fValue) != 1)
    {
        fprintf(stderr, "Invalid numeric input.\n");
        return 1;
    }
    if (!isfinite(fValue) || fValue < 0)
    {
        fprintf(stderr, "Invalid value. Enter a valid nonnegative measurement.\n");
        return 1;
    }

    dRet = CircleArea(fValue);
    printf("Area of circle: %.4f\n", dRet);
    return 0;
}
