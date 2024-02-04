//call by value , call by reference, call by address

#include<stdio.h>
void fun_value(int no)
{
    no++;
}

void fun_address(int *ptr)
{
    (*ptr)++;
}

void fun_reference(int &ref)    //k la ref boltil fakt
{
    ref++; //mulgi dusrya ghari gelyavar name change hot
}

int main()
{
    int i=10, j=10, k=10;   //local variables
    
    fun_value(i);
    fun_address(&j);
    fun_reference(k);
   
   printf("call by value of :i %d\n",i);
   printf("call by address :j %d\n",j);
   printf("call by reference of :k %d\n",k);
   
    return 0;
}