#include<iostream>
using namespace std;
class base
{
    public:
    int i,j,k;      //12
    void fun()
    {
        cout<<"inside base fun\n";
    }
    void gun()
    {
        cout<<"inside base gun\n";
    }
    void sun()
    {
        cout<<"inside base sun\n";
    }
    void run()
    {
        cout<<"inside base run\n";
    }

};

class derived:public base
{
    public:
    int a,b;                //20 bytes varche 12 dharun
    void gun()              //redefination
    {
        cout<<"inside derived gun\n";
    }
    void run()              //redefination
    {
        cout<<"inside derived run\n";
    }

};
int main()
{
   base *bp=new derived;   //upcasting
   bp->fun();
   bp->gun();
   bp->sun();
   bp->run();

    return 0;
 
}



//ha probelm ahe tycha solution virtual4.cpp madhye