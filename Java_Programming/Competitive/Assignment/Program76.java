// Write a program to find sum of digits of a number

class Program76
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);
    }
}

class Logic
{
    int iSum = 0;
    int iDigit = 0;
    
    void sumOfDigits(int inum)
    {
        while(inum != 0)
        {
            iDigit = inum % 10;

            iSum = iSum + iDigit;

            inum = inum / 10;
        }

        System.out.println("Sum of digits is : " + iSum);
    }
}