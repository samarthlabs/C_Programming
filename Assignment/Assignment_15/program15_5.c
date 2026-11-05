#include<stdio.h>
#include<stdlib.h>



//////////////////////////////////////////////
//
// Function Name: Percentage
// Description: Write a program which accept total marks & obtained marks from user and calsulate percentage
// Input: Integer
// Output: Float
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
   float fRet = 0.0f;

   if(iTotal == 0)
   {
     return 0.0;
   }

   fRet = ((float) iObtained / iTotal) * 100;

   return fRet;
}

int main() 
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Please enter total marks ");
    scanf("%d", &iValue1);

    printf("Please enter Obtained marks ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.1f",fRet);

    return 0;
}