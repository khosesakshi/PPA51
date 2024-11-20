class Demo implements Runnable{
    public void run()
    {
        System.out.println("Thread is running");
    }
}

class Threaddemo3
{
    public static void main(String a[])
    {
        System.out.println("Inside main thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
     
    }
}