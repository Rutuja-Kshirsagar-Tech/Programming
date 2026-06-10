// Write a program to find the sum of all even numbers up to N

class Program91
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.sumEvenNumbers(10);
    }
}

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int iSumEven = 0;

        for(iCnt = 0; iCnt < n; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }

        System.out.println("Sum of even numbers : " + iSumEven);
    }
}
