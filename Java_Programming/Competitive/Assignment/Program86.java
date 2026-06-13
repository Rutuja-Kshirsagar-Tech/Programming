// Write a program to check whether a given year is a leap year or not

class Program86
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.checkLeapYear(2024);
    }
}

class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println("Leap year");
        }
        else
        {
            System.out.println("Not a leap year");
        }
    }
}
