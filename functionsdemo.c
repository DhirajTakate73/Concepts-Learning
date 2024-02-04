#include<stdio.h>
int Addition(int No1, int No2)
{
int Ans =0;
Ans =No1 + No2;
return Ans;
}
int main()
{
int value1 =0, value2=0;
int Ret =0;
printf("enter first number : \n");
scanf("%d",&value1);
printf("enter second number : \n");
scanf("%d",&value2);
Ret =Addition(value1,value2);
printf("addition is : %d\n",Ret);
return 0;
}