#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckNumber
// Description: Check Whether a Number is Positive, Negative, or Zero
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue == 0) 
    {
        printf("%d Zero", iValue);
    } 
    else if (iValue < 0) 
    {
        printf("%d Negative Number", iValue);
    } 
    else
    {
        printf("%d Positive Number", iValue);
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}