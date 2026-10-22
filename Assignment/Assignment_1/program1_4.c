#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////
//
// Function Name: Check
// Description: Accept one number and check whether is divisible by 5 or not
// Input: Integer
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

BOOL Check(int iNo) 
{
    if((iNo%5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main() {

  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number");
  scanf("%d", &iValue);

  bRet = Check(iValue);

  if(bRet == TRUE)
  {
        Printf("Divisible by 5");
  }
  else
  {
        printf("Not Divisible by 5");
  }

    return 0;
}