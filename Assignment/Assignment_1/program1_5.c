#include<stdio.h>

//////////////////////////////////////////////
//
// Function Name: Accept
// Description: Accept one number from user and print that number of * on screen.
// Input: None
// Output: String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }

}

int main() {

  int iValue = 0;
  iValue = 5;

  Accept(iValue);

    return 0;
}