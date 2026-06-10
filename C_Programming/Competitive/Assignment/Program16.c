// Write a program which accepts a number from user
// and displays its multiplication of factors

// Input : 12       13      10
// Output: 144      1       10

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int sum = 0;
    sum = 1;

    if(iNo <= 0)
    {
        return -1;
    }
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            sum = sum * iCnt;
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

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}