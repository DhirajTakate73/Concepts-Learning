#include<stdio.h>

void fun()
{
 static int i=10;           ///to store value of i
    i++;

    printf("value of i is :%d\n",i);   
}
int main()
{      
       int no=51;
       fun();
       fun();
       fun();
       
    return 0;
}