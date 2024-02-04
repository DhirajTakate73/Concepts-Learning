#include<stdio.h>

int Addition(int no1,int no2)
{
    int sum=0;

    sum=no1+no2;

    return sum;
}

int substraction(int data1,int data2)
{
    int result=0;
    result=data1-data2;
    return result;
}

int Multiplication(int number1,int number2)
{

    int multiply=0;
     multiply=number1*number2;
     return multiply;

}

int Division(int sankhya1,int sankhya2)
{

    int division=0;
    division=sankhya1/sankhya2;
    
    return division;

}

 
int main()
{
int value1=20;
int value2=10;
int ans=0;

ans=Addition(value1,value2);

 printf("Addition is : %d\n",ans);

ans=substraction(value1,value2);

printf("substraction is : %d\n",ans);

ans=Multiplication(value1,value2);

printf("multiplication is : %d\n",ans);

ans=Division(value1,value2);

printf("division is :%d\n",ans);

    return 0;
}