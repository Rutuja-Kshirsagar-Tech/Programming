// Write a program to check whether a number is divisible by 5 and 11 or not

class Program88
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkDivisible(55);
    }
}

class Logic
{
    void checkDivisible(int inum)
    {
        if((inum % 5) == 0 && (inum % 11) == 0)
        {
            System.out.println("Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Not divisible by 5 and 11");
        }
    }
}