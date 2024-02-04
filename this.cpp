#include<iostream>
using namespace std;
class demo
{
public:
int i;
int j;
int k;

//demo( demo *this,int a=10, int b=20, int c=30)
demo(int a=10, int b=20, int c=30)
{
    this->i=a;
    this->j=b;
    this->k=c;
}

void fun(int no1, int no2)  //void fun(demo *this, int no1, int no2)
{
    cout<<"inside fun\n";
    cout<<"value of i"<<this->i<<"\n";
    cout<<"value of j"<<this->j<<"\n";
    cout<<"value of k"<<this->k<<"\n";

}
void display()
{
    cout<<"inside display\n";
    cout<<"value of pointer is:"<<this<<"\n";
}

};
int main()
{
    demo obj1;
    demo obj2(11,21,51);

    obj1.fun(5,6); //fun(&obj1,5,6); internally automatically hot compilation chya veles
                   //fun(100,5,6)

    obj2.fun(8,9);  //fun(&obj2,8,9);
                    //fun(200,8,9)

cout<<"address of obj1 is "<<&obj1<<"\n";
    obj1.display();  //display(&obj1);
                     //display(100);

   cout<<"address of obj2 is "<<&obj2<<"\n";
 
    obj2.display();   //display(&obj2);
                      //display(200);

    
    return 0;
}