// Write a program which accepts a number from user and
// return difference between summation of all its factors and non factors

// Input :  12
// Output:  -34 (16-50)

// Input :  10
// Output:  -29 (16-50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int factSum = 0;
    int nonfactSum = 0;
    int diff = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            factSum = factSum + iCnt;
        }
        else
        {
            nonfactSum = nonfactSum + iCnt;
        }
    }

    diff = factSum - nonfactSum;

    return diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}