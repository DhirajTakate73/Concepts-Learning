#include<iostream>
using namespace std;
class base
{
    public:
    int i,j,k;
    void fun()      //concrete method 1000
    {
        cout<<"base fun\n";
    }
    virtual void gun()  //concrete method karan body ahe  2000
    {
        cout<<"base gun\n";
    }
    virtual int addition(int no1,int no2)=0;        //abstract method ==0  karan pure virtual fun  karan body nahi
                        //abstract method----- no body
};
class derived:public base
{
    public:
    int a,b;
    void gun()              //concrete method    3000
    {
        cout<<"derived gun\n";
    }
    virtual void sun()      //concrete method 4000   overriding karan base class madhye paan ahe
    {
        cout<<"derived sun\n";
    }
   int addition(int no1, int no2)     //concrete method    5000   ghar ghaychi iccha purn zali ithe base class chi ji base class chi hoti tyla fakt mahit hot ghar kasa ghaycha paan ghar derived ne ghetla
    {
        return no1+no2;
    }
};
int main()
{
    base bobj; 

    base *bp=new derived;
    bp->fun();
    bp->gun();
    int ret=0;
    ret=bp->addition(10,11);
    cout<<"addition is :"<<ret<<"\n";

    return 0;

}
