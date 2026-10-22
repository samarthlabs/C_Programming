#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3){

    float fAns = 0.0f;

    // Type Casting 
    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;

    return fAns;

}

int main() {

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float iResult = 0.0f;

    printf("Enter First Number: ");
    scanf("%d", &iValue1);

    printf("Enter Second Number: ");
    scanf("%d", &iValue2);

    printf("Enter Third Number: ");
    scanf("%d", &iValue3);

    iResult = Average(iValue1, iValue2, iValue3);

    printf("The Average No: %f", iResult);

    return EXIT_SUCCESS;
}
