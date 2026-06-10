// 5. Write a program which accepts area in square feet and
// convert it into square meter. (1 square meter = 0.0929 square feet)

// Input : 5
// Output: 0.464515

// Input : 7
// Output: 0.650321

#include<stdio.h>

double SquareMeter(int iValue)
{
    double SqrMeter = 0.0;

    SqrMeter = iValue * 0.0929;

    return SqrMeter;
}

int main()
{
    int iValue = 0;

    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is : %lf",dRet);

    return 0;
}