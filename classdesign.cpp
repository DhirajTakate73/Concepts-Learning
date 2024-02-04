#include<iostream>
using namespace std;
class array
{
    private:
    int *arr;
    int ilenght;

    public:
    array(int size)    //parameterised constructor
    {
        ilenght=size;
        arr=new int[ilenght];
    }
        ~array()    //destructor
    {
        delete []arr;
    }

    void accept()
    {
        int icnt=0;
        cout<<"enter the elements :"<<"\n";
        for(icnt=0; icnt<ilenght; icnt++)
        {
            cin>>arr[icnt];
        }
    }

    void display()
    {
        int icnt=0;
        cout<<"enter the elements :"<<"\n";
        for(icnt=0; icnt<ilenght; icnt++)
        {
            cout<<arr[icnt]<<"\t";
        }
        cout<<"\n";
    }
//constructor is used to allocate resources here array is the resource
};
int main()
{
    array aobj(5);
    //array aobj2(12);
    aobj.accept();
    aobj.display();

    return 0;
}