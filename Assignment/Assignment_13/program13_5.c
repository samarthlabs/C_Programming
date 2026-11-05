#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CountDiff
// Description: Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int MultiDigits(int iNo)
{   
    int iDigit = 0;
    int iEven = 1;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }

   return iEven - iOdd;
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