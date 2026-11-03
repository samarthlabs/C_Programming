#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: MultipleDisplay
// Description: Write a program which accept N and print fisrt 5 multiples of N.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void MultipleDisplay(int iNo)
{   
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 5; iCnt++)
   {    
     printf("%d\t", iCnt * iNo);
   }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}