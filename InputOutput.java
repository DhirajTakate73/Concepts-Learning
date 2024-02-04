import java.util.*;

class InputOutput
{
    public static void main(String arg[])
    {

        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first number:");
        int no1=sobj.nextInt();

      System.out.println("enter second number:");
        int no2=sobj.nextInt();

        int ans=0;
        ans=no1 + no2;

        System.out.println("addition is :"+ans);

        sobj.close();   //lihina gargecha nahitar error

        //error yet asel tar ithe sobj.close(); asa lihaycha band karnyasathi

    }
}