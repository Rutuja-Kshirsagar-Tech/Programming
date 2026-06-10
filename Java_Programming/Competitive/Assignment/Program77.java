// Write a program to check whether a number is a palindrome or not

class Program77
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkPalindrome(563);
    }
}

class Logic
{
    void checkPalindrome(int inum)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        iTemp = inum;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            iRev = iRev * 10 + iDigit;

            iTemp = iTemp / 10;
        }

        if(iRev == inum)
        {
            System.out.println("Number is a palindrome");
        }
        else
        {
            System.out.println("Number is not a palindrome");
        }
    }
}
