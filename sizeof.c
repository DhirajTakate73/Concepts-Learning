#include<stdio.h>
int main()
{
char ch='A';
int i=21;
float f=12.31f;
double d=89.90;


printf("size of character is :%d bytes\n",sizeof(ch)); //1
printf("size of integer is :%d bytes\n",sizeof(i));  //4
printf("size of float is :%d bytes\n",sizeof(f));    //4
printf("size of double is :%d bytes\n",sizeof(d));   //8


printf("Base address of character is : %d\n",&ch);
printf("Base address of integer is : %d\n",&i);
printf("Base address of float is : %d\n",&f);
printf("Base address of double is : %d\n",&d);

    return 0;
}