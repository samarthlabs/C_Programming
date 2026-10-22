#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckMultipleDivisibility
// Description: Check Divisibility by 3 and 5
// Input: Integer
// Output: String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if((iValue%3 == 0) && (iValue%5 == 0)) 
    {
        printf("Divisible by Both");
    }
    else if(iValue%3 == 0)
    {
        printf("Divisible by 3 Only");
    }
    else if(iValue%5 == 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}