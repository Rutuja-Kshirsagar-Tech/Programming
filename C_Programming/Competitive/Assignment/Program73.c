// Accept N numbers from user and return the
//difference between largest and smallest number

// Input : N : 6
//        Elements : 85 66 3 66 93 88
// Output : 90  (90-3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    int iDiff = 0;

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
        else if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;

    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;

    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;

}
