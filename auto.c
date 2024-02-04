#include<stdio.h>
void display()
{ 
    int no=11;                     //auto int no=11;
    int i;                         //auto int i;
    auto int j;

    printf("value of no :%d\n",no);
    printf("value of i :%d\n",i);

}
int main()
{

    display();
    
//printf("%d",no);        //scope sampto mahnun 
return 0;

}