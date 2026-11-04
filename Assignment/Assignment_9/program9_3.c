#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: EvenFactorial
// Description: Write a program to find even factorial of given number.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int EvenFactorial(int iNo)
{   
  int iCnt = 0, iAns = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {

    if(iCnt % 2 == 0)
    {
        iAns = iAns * iCnt;
    }

  }

    return iAns;
}

int main() 
{

    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return EXIT_SUCCESS;
}