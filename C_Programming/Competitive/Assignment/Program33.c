// Write a program to find even factorial of given number

// Input :  5
// Output:  8     (2*4)

// Input :  -5
// Output:  8   (2*4)

// Input :  10     (2*4*6*8*10)
// Output:  3840

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return 0;
}