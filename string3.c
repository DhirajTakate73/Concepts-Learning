#include<stdio.h>

int main()
{
    char arr[40];

    printf("enter your name : \n");
    scanf("%[^'\n']s",arr);   //purn string scan karnyasathi
    //string accept kara enter det nahi toparyant asa arth varchya line cha
    printf("your name is :%s\n",arr);   //string madhye display karnar mahnun %s

    return 0;
}