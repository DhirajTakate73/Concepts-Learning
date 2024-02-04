class CommandLine1
{
    public static void main(String arg[])
    {
        System.out.println("Number Of Command Line Arguments are : "+arg.length);

        System.out.println("Command line arguments are : ");

        for(int i = 0; i < arg.length; i++)
        {
            System.out.println(arg[i]);
        }

    }
}

//javac CommandLine1.java
//java CommandLine 11 21 51 
//array ahe mahnun indexing 0 pasun suru hoil
//