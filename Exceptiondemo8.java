import java.io.*;

class Exceptiondemo8
{
    public static void main(String A[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("enter your name:");
        String name = bobj.readLine();

        System.out.println("enter your Age:");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name :"+name);
        System.out.println("Your Age :"+Age);

    
    }
}

