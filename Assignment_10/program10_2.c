/* Assignment 10 - Question 2
 * Calculate rectangle area as width times height.
 */
#include <stdio.h>
#include <math.h>

double RectArea(float fWidth, float fHeight)
{
    return (double)fWidth * fHeight;
}

int main(void)
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width and height: ");
    if (scanf("%f %f", &fValue1, &fValue2) != 2)
    {
        fprintf(stderr, "Invalid numeric input.\n");
        return 1;
    }
    if (!isfinite(fValue1) || !isfinite(fValue2) || fValue1 < 0 || fValue2 < 0)
    {
        fprintf(stderr, "Invalid value. Enter a valid nonnegative measurement.\n");
        return 1;
    }

    dRet = RectArea(fValue1, fValue2);
    printf("Area of rectangle: %.4f\n", dRet);
    return 0;
}
