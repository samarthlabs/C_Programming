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

int main() {

    int iValue1, iValue2, iResult;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;   // Business logic

    printf("%d",iResult);

    return 0;
}
