#include<stdio.h>

//////////////////////////////////////////////
//
// Function Name: PrintEven
// Description: Program which accept one number from user and print that number of even numbers on screen
// Input: Integer, Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void PrintEven(int iNo)
{
   if(iNo <= 0)
   {
        return;
   }

   int iCnt = 1;
   
   for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }

}

int main() {

    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}