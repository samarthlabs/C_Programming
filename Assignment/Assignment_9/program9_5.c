#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FactorialDiff
// Description: Write a program which returns difference between Even factroial and odd factroial of given number.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int FactorialDiff(int iNo)
{   
  int iCnt = 0, iOddFact = 1, iEvenFact = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = iNo; iCnt >= 1; iCnt--)
  {

    if(iCnt % 2 == 0)
    {
        iEvenFact = iEvenFact * iCnt;
    }
    else
    {
        iOddFact = iOddFact * iCnt;
    }

  }

    return iEvenFact - iOddFact;
}

int main() 
{

    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return EXIT_SUCCESS;
}