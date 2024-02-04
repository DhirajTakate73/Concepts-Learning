class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)    //parameterised construnctor
    {
        this.Name=str;
        this.Salary=amount;
        this.Age=A;
        this.Address=addr;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method...");
    }

    void Display()
    {
        System.out.println("Employee name :"+this.Name);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Salary :"+this.Salary);
        System.out.println("Employee Address :"+this.Address);

    }
}

class Finalizedemo2
{
    public static void main(String arg[])
    {
        Employee eobj=new Employee("amit", 78000,28,"karve road pune");
        eobj.Display();
        Employee eobj2=eobj;

        Employee eobj3=new Employee("sagar",88000,29,"prabhat road mumbai");

        System.out.println("Hash code of eobj is :"+eobj.hashCode());
        System.out.println("Hash code of eobj is :"+eobj2.hashCode());
        System.out.println("Hash code of eobj is :"+eobj3.hashCode());

        eobj=null;

        System.gc();
    }
}