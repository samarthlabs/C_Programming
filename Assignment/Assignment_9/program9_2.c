#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: DollerToINR
// Description: Accept amount in US doller and return its correspoinding value in Indian currency. Consider 1$ as 70 rupees.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int DollerToINR(int iNo)
{   
   int iAns = 0;

   iAns = iNo * 70;

   return iAns;
}

int main() 
{

    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}