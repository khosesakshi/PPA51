import java.net.*;
import java.io.*;

class Server
{
    public static void main(String A[])throws Exception
    {
        System.out.println("Server application is running");

        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is waiting fo client at port number 2100");

        Socket sobj = ssobj.accept();       //acept the request from client
        System.out.println("Connection establish with the client..");
       
        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        System.out.println("Marvellous chat messanger application started..");
        while((str1 = br1.readLine()) != null)
        {
         System.out.println("Client says: "+str1);
         System.out.println("Enter message for client :");
         str2 = br2.readLine();
         ps.println(str2);
        }
         System.out.println("Thank you for using the Marvellous chat Application..");
        
    }
    
}
