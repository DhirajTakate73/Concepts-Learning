#include<iostream>
using namespace std;
class base
{
    public:
    int i,j,k;      //12
    virtual void fun()      //1000  text section of the exe  madhle addressess imaginary
    {
        cout<<"inside base fun\n";
    }
   virtual void gun()      //2000
    {
        cout<<"inside base gun\n";
    }
    void sun()      //3000
    {
        cout<<"inside base sun\n";
    }
    void run()      //4000
    {
        cout<<"inside base run\n";
    }

};

class derived:public base
{
    public:
    int a,b;                             //20 bytes varche 12 dharun
    virtual void gun()  //5000            //redefination
    {
        cout<<"inside derived gun\n";
    }
    void run()  //6000            //redefination
    {
        cout<<"inside derived run\n";
    }
   virtual void mun()       //7000
    {
        cout<<"inside derived mun\n";
    }

};
int main()
{

   cout<<sizeof(base)<<"\n";                //vtable(virtual table mule size vadhte karan vptr add hoto )
   cout<<sizeof(derived)<<"\n";

   base *bp=new derived;   //upcasting
   bp->fun();              //base fun
   bp->gun();              //derived gun
   bp->sun();              //base sun
   bp->run();              //base run
   //bp->mun();              //error karan base kade mun nahi aani varach nahi tar khali nahi yenar


    return 0;

}
//bp pointer 


