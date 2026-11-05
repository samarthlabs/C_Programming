#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FactRev
// Description: Write a program which accept number from user and return difference between summation of all its factors and non factor. 
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int FactDiff(int iNo)
{   
    int iCnt = 0;
    int iFact = 0;
    int iNoFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iNoFact = iNoFact + iCnt;
        }
    }
    return iFact - iNoFact;
}

int main() 
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}