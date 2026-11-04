/* Assignment 8 - Question 4
 * Print the multiplication table of |N| from 1 to 10.
 */
#include <stdio.h>

void Table(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for (int iCnt = 1; iCnt <= 10; iCnt++)
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
    Table(iValue);
    return 0;
}
