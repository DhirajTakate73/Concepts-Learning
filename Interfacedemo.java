interface Mathematics                   //interface la implement karav lagta            //for eg lenscart, tyne j sangitla te implement karna imp ahe franchise owner ne
{
    public int Addition(int A, int B);              //interface is like empty question paper   tyla implement karta inherit nahi karu shakat
    public int Substraction(int A, int B);          //interface cha object tyar nahi hot
}
class Marvellous implements Mathematics         //marvellous implement kartoy so body den important nahitar error yeil    //lenscart franchise owner
{
        public int Addition(int A, int B)
        {
            return A + B;
        }
        public int Substraction(int A, int B)            
        {
            return A - B;
        }
}

class Interfacedemo
{
    public static void main(String arg[])
    {
        Marvellous mobj= new Marvellous();
        int iret=0;
        iret=mobj.Addition(11,10);
        System.out.println("Addition is :"+iret);
        iret=mobj.Substraction(11,10);
        System.out.println("Substraction is :"+iret);

    }
}