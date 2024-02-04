#include<stdio.h>
int main()
{
int i=10;
signed int j=20;
signed int k=-30;

unsigned int a=40;
//unsigned int b=-40;  //NA

int x=10;           //4bytes
short int y=10;     //2bytes
long int z=20;      //8bytes


printf("%d\n",i);   //10
printf("%d\n",j);   //20
printf("%d\n",k);   //-30
printf("%d\n",a);   //40


printf("size of x is :%d\n",sizeof(x));
printf("size of y is :%d\n",sizeof(y));
printf("size of z is :%d\n",sizeof(z));

    return 0;
}