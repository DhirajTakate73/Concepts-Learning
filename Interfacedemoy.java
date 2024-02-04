// one interface can extends another interface

interface Demo
{
    void fun();
}
interface Hello extends Demo        //jo koni hello interface la implement karel tyne fun aani gun doghana body dili pahije karan hello demo la extend(inherit) kartoy
{
    void gun();
}
class Marvellous implements Hello
{
    public void fun()
    {}
    public void gun()
    {}
}


//one interface can extend another interface and one class can implement multiple interfaces