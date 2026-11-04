/* Assignment 8 - Question 5
 * Print the multiplication table of |N| from 10 down to 1.
 */
#include <stdio.h>

void TableRev(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for (int iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%lld ", iNumber * iCnt);
    }
    printf("\n");
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
    TableRev(iValue);
    return 0;
}
