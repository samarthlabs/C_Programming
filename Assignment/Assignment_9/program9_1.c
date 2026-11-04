#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Write a program which accept number from user and display below pattern.
// Input: Integer
// Output: Character
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void Display(int iNo)
{   
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
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