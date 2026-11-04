#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Factorial
// Description: Write a program to find factorial of given number
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int Factorial(int iNo)
{   
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main() 
{

    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d", iRet);

    return EXIT_SUCCESS;
}