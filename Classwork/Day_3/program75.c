// Input : 4
//1   *   2     *   3   *   4   *

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo) {
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--) {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main() {

    int iValue = 0;

    printf("Enter the Frequency: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}