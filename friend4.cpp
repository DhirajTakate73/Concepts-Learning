#include<iostream>
using namespace std;

// friend 3 chi copy paan parat lihila code

class hello
{
    public:
    void fun();     //fakt fun declare kele ahe define nahi body nahi lihili asa chalta c++ madhye
    void gun();     //2 member fun 
};
class demo
{
    public: int i;
    private: int j;
    protected: int k;
    public:
    demo()                  //constructor shold be in public section rule
    {
        i=10; j=20; k=30;
    }    
    friend class hello;   //purn class friend ahe asa arth
};

//return_value class_name::function_name(); asa prototype ahe 
void hello::fun()           //fun function chi defination ahe ithe fakt class madhye decalration kel ahe 
{
    demo obj;
    cout<<"value of i:"<<obj.i<<"\n";
    cout<<"value of j:"<<obj.j<<"\n";
    cout<<"value of k:"<<obj.k<<"\n";

}

void hello::gun()   // //gun function chi defination ahe ithe fakt class madhye decalration kel ahe 
{
    demo obj;
    cout<<"value of i:"<<obj.i<<"\n";
    cout<<"value of j:"<<obj.j<<"\n";
    cout<<"value of k:"<<obj.k<<"\n";

}
int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}               //whole class can be a friend of another class 
        //naked fun precompile hotat
