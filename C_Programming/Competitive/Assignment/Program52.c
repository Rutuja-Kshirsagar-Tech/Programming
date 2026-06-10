// Write a program which accept number from user and
// check whether it contains 0 or not

// Input : 2395
// Output: There is no zero

// Input : 1018
// Output: It contains zero

// Input : 9000
// Output: It contains zero

// Input : 10687
// Output: It contains zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 0)
        {
            iDigit = -iDigit;
        }
        
        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}