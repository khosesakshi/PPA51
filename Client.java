import java.net.*;
import java.io.*;

class Client
{
    public static void main(String A[])throws Exception
    {
        System.out.println("Client application is running");

       
       
       
        Socket sobj = new Socket("localhost",2100);   //request to server
        System.out.println("Connection establish with the Server..");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        System.out.println("Marvellous chat messanger application started..");
        while(!(str1 = br2.readLine()).equals("end"))
       {
        ps.println(str1);
        str2 = br1.readLine();
        System.out.println("Enter the message for server:");
        System.out.println("Server says : "+str2);
        }
        System.out.println("Thank you for using the Marvellous chat Application..");
    } 
}