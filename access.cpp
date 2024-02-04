#include<iostream>
using namespace std;
class Demo
{
    int i;              //private karan kahi nahi mahnun default private asto c++ madhye
    public:
    int j;
    private:
    int k;
    protected:
    int a;
    public:
    demo()              //default constructor
    {
        i=10;
        j=20;
        k=30;
        a=40;

    }
    void display()      //parameters display karnyasathi
    {
        cout<<"value of i:"<<i<<"\n";     //A  
        cout<<"value of j:"<<j<<"\n";     //A  
        cout<<"value of k:"<<k<<"\n";     //A 
        cout<<"value of a:"<<a<<"\n";     //A  

    }

};
int main()
{
    Demo obj;       //16bytes
        cout<<"value of i:"<<obj.i<<"\n";       //NA
        cout<<"value of j:"<<obj.j<<"\n";       //A
        cout<<"value of k:"<<obj.k<<"\n";       //NA
        cout<<"value of a:"<<obj.a<<"\n";       //NA

        obj.display();      //display(&obj)



    return 0;

}