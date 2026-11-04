#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Table
// Description: Write a program which accept number from user and display its table.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void Table(int iNo)
{   
    int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d\t", iMulti);
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}