#include<iostream>
using namespace std;
class demo
{
    public:
    int i;
    const int j;            //const int j=10 asa chalel paan karu naye upyog nahi warning yeil
    const int k;            //const int k=20 asa chalel paan karu naye upyog nahi warning yeil

    demo(int a, int b, int c) :j(b),k(c)    //member initialisation list  //parameterised constructor
    {
        i=a;
        //j=b;    asa karu naye 
        //k=c;    asa karu naye
    }
};
int main()
{
    demo obj(11,21,51);
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";  
    cout<<"value of k :"<<obj.k<<"\n";

    obj.i++;            //A
    //obj.j++;          //NA
    //obj.k++;          //NA
    return 0;

}