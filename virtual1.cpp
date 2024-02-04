#include<iostream>
using namespace std;
class base
{
    public:
    int i,j,k;
    void fun()
    {
        cout<<"inside base fun\n";

    }

};

class derived:public base
{
    public:
    int a,b;
    void gun()
    {
        cout<<"inside derived gun\n";

    }

};
int main()
{
    base bobj;
    derived dobj;

    cout<<sizeof(bobj)<<"\n";           //12
    cout<<sizeof(dobj)<<"\n";           //20
    bobj.fun();

    dobj.fun();
    dobj.gun();

    return 0;

}