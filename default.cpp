#include<iostream>
using namespace std;
float calculate(float marks, float outof=100)
{
    float percentage=((marks/outof)*100);
    return percentage;
}
int main()
{

    float ans=0.0f;

    ans=calculate(86,100);               //calculate(86,100)
    cout<<"percentage:"<<ans<<"\n";

    ans=calculate(86);                  //calculate(86) default 100 copy hoil
    cout<<"percentage:"<<ans<<"\n";     

    ans=calculate(320,400);             //calculate(320,400)
    cout<<"percentage:"<<ans<<"\n";

    return 0;
} //(flaot outof=100,float marks) asa nahi chalat karan compiler la decide karayla problem hoto default konta

//default mahanje nahi dila tari chalto