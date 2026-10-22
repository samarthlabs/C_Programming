#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
// Input: Integer
// Output: Character
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void Display(int iNo)
{
   if(iNo < 10) 
   {
        printf("Hello");
   }
   else
   {
        printf("Demo");
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