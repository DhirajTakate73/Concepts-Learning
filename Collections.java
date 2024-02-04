import java.util.*;

class Collections
{
    public static void main(String Arg[])
    {              //Generic
        LinkedList <Integer> lobj = new LinkedList<>();

        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);

        System.out.println(lobj);

        lobj.addFirst(5);
        System.out.println(lobj);
        if(lobj.contains(30))
        {
            System.out.println("LL contains 30 in it...");
        }
        else
        {
            System.out.println("There is no 30 in the LL...");
        }

        //contains method is same like search 

        System.out.println("Index of 30 is : "+lobj.indexOf(30));

        Iterator iobj = lobj.iterator();
        //name of class       //name of method
        while(iobj.hasNext())       //hasnext mahanje ahe ka pudhe koni
        {
            System.out.println(iobj.next());
        }

       // lobj.clear();       //sagli memory nighun jail

    }
}