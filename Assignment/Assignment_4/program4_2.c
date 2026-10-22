#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckEvenOdd
// Description: Check Even or Odd Number
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0) 
    {
        printf("%d is Even Number", iValue);
    }
    else 
    {
        printf("%d Odd Number", iValue);
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}