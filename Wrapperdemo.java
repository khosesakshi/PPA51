
class Wrapperdemo
{
    public static void main(String a[])
    {
        int no1=11;

        Integer no2=11;

        System.out.println(no1);
        System.out.println(no2);

        int x=no2;          //auto unboxing
        System.out.println(x);

        Integer y=no1;      //auto boxing
        System.out.println(y);
    }
}

/*
 premitive data type            wrwpper class
 
 boolean                        Boolean
 byte                           Byte
 char                           Character
 int                            Integer
 short                          Short
 float                          Float
 double                         Double
 long                           Long

 */