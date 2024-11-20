
class Loopdemo
{
    public static void main(String A[])
    {
        int i=0;

        System.out.println("output by using for loop");
            //1   2    3
        for(i=1;i<=5;i++)
        {
            System.out.println(i);  //4
        }

        System.out.println("output by using while loop");
        i=1;
        while(i<=5)
        {
            System.out.println(i);
            i++;
        }
       
        System.out.println("output by using do- while loop");
            i=1;
            do{
                System.out.println(i);
                i++;
            }while(i<=5);

    }
}



