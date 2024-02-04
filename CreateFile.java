import java.io.*; //hya package madhye file handling che instructions astat

class CreateFile
{
    public static void main(String arg[]) 
    {
        try
        {
            File fobj=new File("PPA.txt");
            fobj.createNewFile();   //c small
        }
        catch(Exception obj)
        {}

    }

}