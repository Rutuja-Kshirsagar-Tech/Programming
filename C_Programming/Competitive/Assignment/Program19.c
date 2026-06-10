// Write a program which accepts a number from user and
// return summation of all its non factors

// Input :  12
// Output:  50

// Input :  10
// Output:  37

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int sum = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            sum = sum + iCnt;
        }
    }
    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}