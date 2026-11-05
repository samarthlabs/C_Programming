#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: RangeDisplayRev
// Description: Write a program which accept range from user and display all numbers in between that range in reverse order
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void RangeSumEven(int iStart, int iEnd)
{   

    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invaild range\n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main() 
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}