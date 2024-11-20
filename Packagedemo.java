import Marvellous.Circle;

import Marvellous.Infosystems.Square;
class Packagedemo
{
    public static void main(String arg[])
    {
        Circle cobj=new Circle();
        float Ans=0.0f;

        Ans=cobj.CircleArea(10.5f);

        System.out.println("Area of circle is:"+Ans);

        Square.sobj=new Square();
        Ans=sobj.SquareArea(10.5f);

        System.out.println("area of square is:"+Ans);
    }
}
