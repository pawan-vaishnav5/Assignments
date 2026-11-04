/* Assignment 10 - Question 3
 * Convert kilometers to meters: 1 kilometer = 1000 meters.
 * Overflow is reported through errno, preserving the int return type.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int KMtoMeter(int iNo)
{
    errno = 0;
    if (iNo > INT_MAX / 1000 || iNo < INT_MIN / 1000)
    {
        errno = ERANGE;
        return 0;
    }
    return iNo * 1000;
}

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometers: ");
    if (scanf("%d", &iValue) != 1 || iValue < 0)
    {
        fprintf(stderr, "Invalid input. Enter a nonnegative integer distance.\n");
        return 1;
    }

    iRet = KMtoMeter(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Distance is too large for the int return type.\n");
        return 1;
    }
    printf("Distance in meters: %d\n", iRet);
    return 0;
}
