#include<stdio.h>
#include<stdlib.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;

    for(iCnt = 1; i <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    printEven(iValue);

    return EXIT_SUCCESS;
}