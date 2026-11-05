#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: MultFact
// Description: Write a program which accept number from user its multiplication of factor.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int MultFact(int iNo)
{   
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;

}

int main() 
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}