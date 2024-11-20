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

        Ans = No1 /No2;

        System.out.println("division is:"+Ans);
    }
}