#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FactRev
// Description: Write a program which accept number from user and display all its non factors.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

void NonFact(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}