#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");
    }
    if(iNo > 0)
    {
        printf("Positive Number");
    }
    if(iNo < 0)
    {
        printf("Negative Number");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}