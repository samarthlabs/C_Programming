#include<stdio.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept number from user and check whether number is even or odd
// Input: Integer
// Output: Integer, String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo%2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FAlSE;
    }
   
}

int main() 
{

    int iValue = 0;
    BOOL bRet = FAlSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even", iValue);
    }
    else
    {
        printf("%d is Odd", iValue);
    }

    return 0;
}