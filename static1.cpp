#include<iostream>
using namespace std;
class demo
{
public:
int i;
int j;
demo(int a=10, int b=20)   //parameterised constructor with default arguments
{
i=a;
j=b;
}         //demo(){} asa takla tr ambiguity yeil mahanaje confusion hoil compiler cha konta ghaycha 

void display()
{
    cout<<"value of i"<<i<<"\n";
    cout<<"value of j"<<j<<"\n";
}
};
int main()
{
    demo obj1;
    obj1.display();

    demo obj2(11);
    obj2.display();

    demo obj3(51,101);
    obj3.display();

return 0;
}
/*   */   // mahanje multiple line arguments