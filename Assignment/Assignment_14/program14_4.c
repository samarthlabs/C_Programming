#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FactRev
// Description: Write a program which accept number from user and user and return summation of all its non factors.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

void FactRev(int iNo)
{   
    int iCnt = 0;

    for(iCnt = iNo / 2; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}