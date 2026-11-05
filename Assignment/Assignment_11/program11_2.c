#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: RangeDisplayEven
// Description: Write a program which accept range from user and display all even numbers in between that range.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{   
   while(iStart <= iEnd)
   {

    if(iStart% 2 == 0)
    {
        printf("%d\t",iStart);
    }
        iStart++;
   }
}

int main() 
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}