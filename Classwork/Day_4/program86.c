/*
    ------------------------------------
                Operation ||
    ------------------------------------
    Result1     Result2     Final Result
    ------------------------------------
    TRUE        TRUE            TRUE    Short Circuit
    TRUE        FLASE           TRUE    Short Circuit
    FLASE       TRUE            TRUE    
    FALSE       FALSE           FALSE
    ------------------------------------


*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) 
    {
        if(((iNo%3) == 0) || ((iNo%5) == 0)) 
        {
            printf("The given number %d is Divisible by 3 and 5", iNo);
        } 
        else 
        {
            printf("The given number %d is not Divisible 3 and 5", iNo);
        }
    }

int main() 
{

    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}