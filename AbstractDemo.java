abstract class demo         //object create honar nahi  abstract class ahe mahnun 
{
    public int A;
    public int B;

    public Demo()               //default constructor
    {
        System.out.println("Inside Demo constructor");
        this.A=0;
        this.B=0;
    }
    abstract void fun();        //virtual void fun()=0; in c++ pure virtual syntax

    void gun()                  //concrete method
    {
        System.out.println("Inside gun of Demo");
    }
}


class AbstractDemo
{
    public static void main(String arg[])
    {
        //Demo obj=new Demo();          error yeil
    }
}