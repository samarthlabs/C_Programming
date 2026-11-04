#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: TableRev
// Description: Write a program which accept number from user and display its table in reverse order.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void TableRev(int iNo)
{   
    int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMulti = iNo * iCnt;
        printf("%d\t", iMulti);   
    }
    
}

int main() 
{

    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}