#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckVotingEligibility
// Description: Check Voting Eligibility
// Input: Integer
// Output: Displays whether the person is eligible to vote, or an invalid-age message.
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{   
    if(iAge <= 0) 
    {
        printf("Invalid Age");
        return;
    }

    if(iAge >= 18) 
    {
        printf("Eilgible for Voting");
    }
    else 
    {
        printf("Not Eilgible for Voting");
    }
}

int main() 
{

    int iAge = 0;
    

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}