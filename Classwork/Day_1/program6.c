/*
    Step 1: Understand the problem statement
    Step 2: Write the alogrithm
    Step 3: Decide the programming Language
    Step 4: Write the program
    Step 5: Test the program

*/

//////////////////////////////////////////////////////////////////////////
//
// Step 1: Understand the problem statement
//         user is going to enter any 2 integers
//         And we need to perform addition
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// Step 2: Write the alogrithm
/*
    START
        Accept first number as no.1
        Accept second number as no.2
        Create a vareable as ans to store a result
        Perfore the addition and store into ans
        Display the result from ans
    END
*/
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
// Step 3: Decide the programming Language
//          We select C programming
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//
// Step 4: Write the program
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2) 
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     // Business logic

    return iAns;
}

int main() {

    int iValue1 = 0, iValue2 = 0, iResult = 0;
    // float 0.0f3
    // double 0.0
    // char \0
    // pointer null

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);   

    printf("Addition is : %d\n",iResult);

    return 0;
}
