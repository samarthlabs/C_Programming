#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Multiply
// Description: Write a program which accept three numbers and print its multiplication.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iRet = 1;

    if(iNo1 != 0)
    {
         iRet = iRet * iNo1;
    }

    if(iNo2 != 0)
    {
        iRet = iRet * iNo2;
    }

    if(iNo3 != 0)
    {
        iRet = iRet * iNo3;
    }

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    return iRet;
}

int main() 
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0, bRet = 0;

    printf("Please enter two number ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    bRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three number is %d", bRet);

    return 0;
}