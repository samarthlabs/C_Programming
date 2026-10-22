#include<stdio.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept Two number from user and display first number in sece=ond number of times.
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
   int i = 0;

   // Write Updater
   for(i = 0; i < iFrequency; i++)
   {
        printf("%d  ", iNo);
   }
}

int main() 
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter Frequency: ");
    scanf("%d", & iCount);

    Display(iValue, iCount);

    return 0;
}