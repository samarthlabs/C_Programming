#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: KMtoMeter
// Description: Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

int KMtoMeter(int iNo)
{   
    int iAns = 0;

    iAns = iNo * 1000;

    return iAns;
}

int main() 
{

    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}