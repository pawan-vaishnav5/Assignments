#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 18)
    {
        printf("Invalid age");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}