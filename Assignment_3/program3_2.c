#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; i < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");

    scanf("%d",%iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}