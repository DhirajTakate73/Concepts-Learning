#include<stdio.h>

int Addition(int no1,int no2)    //global initialization 
{                                //arguments
    int sum=0;

    sum=no1+no2;              //buisness logic

    return sum;
}                             //comoany sathi karan reusability vaparli ahe 

int main()
{
int value1=10;
int value2=11;
int ans=0;

ans=Addition(value1,value2);    // function call
                                //parameter 

 printf("Addition is : %d\n",ans);


    return 0;
}


// pop approach (procedure oriented approach)
//(1) program execution line 12 pasun suru hoil karan main function ahe mahnun 
//(2)mag 14 15 16 line 3 kade jatil int no1 madhye value1 mahanje 10 int no2 madhye value2 mahanje 11
//(3)sum madhye ans mag sum hoil aani ti value ans madhye copy hoil 
//(4)mag line 21 madhun printf mule ans display hoil 