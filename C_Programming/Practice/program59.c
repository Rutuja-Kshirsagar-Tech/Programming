// Input : 5
// Output : 5 4 3 2 1

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}