#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: RangeSum
// Description: Write a program which accept range from user and return addition of allnumbers in between that range.(Range should contains positive number only)
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{   
    if(iStart < 0)
    {
        printf("Invalid range\n");
        return 1;
    }

    int iSum = 0;

    while(iStart <= iEnd)
        {
            iSum = iSum + iStart;
            iStart++;
        }

   return iSum;
}

int main() 
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return EXIT_SUCCESS;
}