#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept one number from user and print that number of * on screen
// Input: Integer
// Output: Character 
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void Display(int iNo)
{
   int iCnt = 0;
   // Write Updater
   while(iCnt < iNo)
   {
        printf(" * ");
        iCnt++;
   }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}