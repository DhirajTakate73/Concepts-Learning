//System.gc()       //garbage collector la call karnyachi method free asel tar yeto to
//depricate : shkteyeto vapru naka

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

class FinalizeDemo1
{
    public static void main(String arg[])
    {
        Employee eobj=new Employee("amit", 78000,28,"karve road pune");
        eobj.Display();
        eobj=null;

        System.gc();
    }
}