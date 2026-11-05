#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: RangeSumEven
// Description: Write a program which accept range from user and return addition of all even numbers in between that range.(Range should contain positive numbers only) 
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{   
    if(iStart < 0)
    {
        printf("Invalid range\n");
        return 1;
    }

    int iSum = 0;

    while(iStart <= iEnd)
        {
            if(iStart % 2 == 0)
            {
            iSum = iSum + iStart;
            }
            iStart++;
        }

        if(iSum == 0)
        {
            printf("Invaild range\n");
            return 1;
        }

   return iSum;
}

int main() 
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return EXIT_SUCCESS;
}