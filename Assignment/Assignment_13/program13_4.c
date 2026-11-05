#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: MultiDigits
// Description: Write a program which accept number from user and return Multiplication of all digits.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int MultiDigits(int iNo)
{   
    int iDigit = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti = iDigit * iMulti;
        }
        iNo = iNo / 10;
    }

   return iMulti;
}

int main() 
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}