#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: OddDisplay
// Description: Write a program which accept N from user and print all odd numbers up to N.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void OddDisplay(int iNo)
{   
   int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo - 5); iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}