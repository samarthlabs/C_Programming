#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Write a program which accept number from user and display its digits in reverse order.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 4/11/2026
//
//////////////////////////////////////////////

void Display(int iNo)
{   
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
   
}

int main() 
{

    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}