// Write a program to find the sum of even and odd digits separately in a number

class Program84
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.sumEvenOddDigits(123456);
    }
}

class Logic
{
    void sumEvenOddDigits(int inum)
    {
        int iDigit = 0;
        int iSumOdd = 0;
        int iSumEven = 0;

        while(inum != 0)
        {
            iDigit = inum % 10;

            if((iDigit % 2) == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            inum = inum / 10;
        }

        System.out.println("Sum of even numbers : " + iSumEven);
        System.out.println("Sum of odd numbers : " + iSumOdd);
    }
}