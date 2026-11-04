/* Assignment 15 - Question 5
 * Calculate obtained marks as a percentage of total marks.
 * Reject zero or negative totals and obtained marks outside 0..total.
 */
#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if (iTotal <= 0 || iObtained < 0 || iObtained > iTotal)
    {
        return -1.0f;
    }
    return (float)((double)iObtained / iTotal * 100.0);
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Please enter total and obtained marks: ");
    if (scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    float fRet = Percentage(iValue1, iValue2);
    if (fRet < 0.0f)
    {
        fprintf(stderr, "Invalid marks. Total must be positive and obtained marks must be within 0..total.\n");
        return 1;
    }
    printf("%.6g%%\n", (double)fRet);
    return 0;
}
