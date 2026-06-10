// Write a program to check whether a number is positive,negative, or zero

class Program85
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkSign(-8);
    }
}

class Logic
{
    void checkSign(int inum)
    {
        if(inum < 0)
        {
            System.out.println("Number is Negative");
        }
        else if(inum > 0)
        {
            System.out.println("Number is positive");
        }
        else
        {
            System.out.println("Number is Zero");
        }
    }
}