#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FindGreatest
// Description: find the Greatest of Three Numbers
// Input: Integer, Integer, Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{   
    if((iFirst >= iSecond) && (iFirst >= iThird)) 
    {
        printf("%d is Greatest", iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest", iSecond);
    }
    else 
    {
        printf("%d is Greatest", iThird);
    }
}

int main() 
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three number: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}