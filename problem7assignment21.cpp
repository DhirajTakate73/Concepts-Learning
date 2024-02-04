#include<iostream>
using namespace std;
class base1 
{
    public:
    int i;
    float f;

    virtual void gun()=0;
    virtual void sun()=0;

    virtual void run()
    {};
};
class base2
{   
        public:
        int j;
        float g;
        virtual void mun()=0;
        virtual void fun()=0;
        void fun()
        {};
};

class derived:public base1,base2
{
    int i;
    double d;

    void sun()
    {};
    void fun()
    {};
    void gun()
    {};
    void mun()
    {};
};      
int main()
{
    derived dobj;
    
    return 0;
}