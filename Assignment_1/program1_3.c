#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("%d",iNo);
        i--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency to print : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}