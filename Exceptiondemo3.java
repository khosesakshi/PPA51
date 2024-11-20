import java.util.Scanner;

 class Exceptiondemo3
{
    public static void main(String a[])
    {
        int No1=0,No2=0,Ans=0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter first number:");
        No1 = sobj.nextInt();

        System.out.println("enter second number:");
        No2 = sobj.nextInt();

        try
        {
            System.out.println("inside try block");
            Ans = No1 /No2;
        }

        catch(ArithematicException obj)
        {
            System.out.println("inside catch block");
            System.out.println(obj);
        }

        finally
        {
            System.out.println("inside finally block");
        }

            System.out.println("division is:"+Ans);
    }
}