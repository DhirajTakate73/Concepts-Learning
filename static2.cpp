#include<iostream>
using namespace std;
class demo
{
public:
int i;             //12 bytes total  memoery milel
int j;
static int k;     //loncha vati  taatachya baher

demo(int a=10, int b=20)   //parameterised constructor with default arguments
{
i=a;
j=b;
}         

void display()
{
    cout<<"value of i"<<i<<"\n";
    cout<<"value of j"<<j<<"\n";
}

};
int demo::k=111;    //:: scope resolution operator data fetech karnyasathi class ch nav aadhi lihun acces  karaycha 
    // static variable class chya baher mention karaycha
int main()
{
     cout<<"value of k is:"<<demo::k<<"\n"; 

    demo obj1(11,21);
    demo obj2(51,101);
    demo obj3(121,151);

    cout<<"size  of object is:"<<sizeof(obj1)<<"\n";

    obj1.display();
    obj2.display();
    obj3.display();

return 0;
}
//object madhye fakt non static variable thevtat
//non static variable la instance variable boltat
//static la class variable boltat