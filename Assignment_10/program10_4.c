/* Assignment 10 - Question 4
 * Convert Fahrenheit to Celsius using floating-point division.
 */
#include <stdio.h>
#include <math.h>

double FhtoCs(float fTemp)
{
    return ((double)fTemp - 32.0) * (5.0 / 9.0);
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fValue) != 1)
    {
        fprintf(stderr, "Invalid numeric input.\n");
        return 1;
    }
    if (!isfinite(fValue))
    {
        fprintf(stderr, "Invalid value. Enter a valid temperature.\n");
        return 1;
    }

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius: %.5f\n", dRet);
    return 0;
}
