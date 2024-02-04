abstract class Demo         //object create honar nahi                  Base class 
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside demo constructor");
        this.A=0;
        this.B=0;
    }
    abstract void fun();        //virtual void fun()=0; in c++ pure virtual syntax

    void gun()
    {
        System.out.println("Inside gun of Demo");
    }
}
class Hello extends Demo                                        //Derived class
{
    public Hello()
    {
        System.out.println("inside hello constructor");
    }
    public void fun()                      //varchi abstract method hello ne define keli   mahanje body dili ji tyachi responsibility hoti
    {
        System.out.println("inside fun of hello");
    }
} 

class AbstractDemo1
{
    public static void main(String arg[])
    {
        Hello hobj=new Hello();
        hobj.fun();             //hello ch fun call hoil karan demo kde ti abstract hoti
        hobj.gun();             //demo chi call hoil karan hello kde ti nahi
    }
}