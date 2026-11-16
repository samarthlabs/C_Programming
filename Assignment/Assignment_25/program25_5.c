#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: DisplaySchedul
// Description: Accept division of student from user and depends on the division display exam timing. There are 4 4 division in school as A,B,C,D. Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.(Applicaiton should be case insensitive)
// Input: Character
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: C
// Output: Your exam at 9:20 AM
//////////////////////////////////////////////////////////

void DisplaySchedul(char chDiv)
{

    if(chDiv== 'A' || chDiv == 'a')
    {
        printf("Your Exam at 9:20 AM");
    }
    else if(chDiv== 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8:30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9:20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c", &cValue);

    DisplaySchedul(cValue);

    return 0;
}