class Marvellous
{
    public int i;
    public int j;       //public: lihaycho c++ madhye 

    public Marvellous()         //default constructor
    {
        System.out.println("inside default constructor");
        this.i=0;       //this pointer c++ sarkha
        this.j=0;       //pointer nahi java madhye ->  operator nahi mahnun 
    }
    public Marvellous(int a, int b) //parameterised constructor  //copy constructor nahi java madhye  clone method aste   destructor paan nasto
    {
        System.out.println("inside parameterised constructor");
        this.i=a;
        this.j=b;
    }
    public void fun()
    {
        System.out.println("inside fun method");
    }
}
class ClassDemo 
{
    public static void main(String arg[])
    {
        System.out.println("inside main");

        Marvellous mobj1=new Marvellous();  //default constructor
        Marvellous mobj2=new Marvellous(11,21); //parameterised constructor

        System.out.println(mobj2.i);    //11
        System.out.println(mobj2.j);    //21

        mobj2.fun();
    }
}


//for each class vegli .class file tyar hote