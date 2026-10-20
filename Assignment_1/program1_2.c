#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("Marvellous\n");
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