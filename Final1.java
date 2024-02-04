class Demo
{
    public int a;
    public final int b;  //c++ madhye constant lagech initialise karna allowes nahi paan java madhye allowed ahe 
    Demo()
    {
        a=11;
        b=21;
    }
    Demo(int i, int j)
    {
        a=i;
        b=j;
    }
}
class Final1
{

    public static void main(String arg[])
    {
        Demo dobj=new Demo();
        System.out.println("value of a:"+dobj.a);
         System.out.println("value of b:"+dobj.b);

        dobj.a++;

        //dobj.b++;   error yeil karan final(constant ahe)
       Demo dobj2=new Demo(51,101);
       System.out.println("value of a:"+dobj2.a);
       System.out.println("value of b:"+dobj2.b);

    }
}