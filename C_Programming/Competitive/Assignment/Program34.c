// Write a program to find odd factorial of given number

// Input :  5
// Output:  15  (1*3*5)

// Input :  -5
// Output:  15  (1*3*5)

// Input :  10  
// Output:  945   (1*3*5*7*9)

#include<stdio.h>

int OddFactorial(int iNo)
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
        if((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return 0;
}