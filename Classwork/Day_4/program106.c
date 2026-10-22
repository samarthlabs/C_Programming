#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo) 
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++) 
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }

    if(iSum == iNo) 
    {
        return true;
    } 
    else 
    {
        return (iSum == iNo);
    }

}

int main() 
{

    int iValue = 0;
    bool iRet = false;
    
    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = CheckPerfect(iValue);
    
    if(iRet == true) {
        printf("it is perfect number\n");
    } else {
        printf("it is not perfect number\n");
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)