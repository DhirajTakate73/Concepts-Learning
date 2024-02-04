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

};

class derived:public base
{
    public:
    int a,b;                //20 bytes varche 12 dharun
    void gun()
    {
        cout<<"inside derived gun\n";

    }

};
int main()
{
   base *bp1=new base;        //no casting      //12 bytes allocate hotil heap var
   derived *dp1=new derived;   //no casting     //20bytes allocate hotil heap var
   base *bp2=new derived;      //upcasting
  // derived *dp2=new base;      //downcasting  12 byte capacity aslela pointer 20bytes la point karto mahnun downcasting which is not allowed
    
    return 0;

}