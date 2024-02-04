#include<iostream>
using namespace std;    //using kadhun takla tar

namespace Marvellous
{
    void Display()
    {
        cout<<"Inside Display of Marvellous\n";
    }

}

namespace Infosystems
{
    void Display()
    {
        cout<<"Inside display of Infosystems\n";
    }
}

int main()
{
    Marvellous :: Display();
    Infosystems :: Display();

    return 0;
}