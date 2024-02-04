#include<stdio.h>   //printscanf
#include<fcntl.h>   //file control open close read write
#include<unistd.h>  //universal standard 
#include<String.h>

int main()
{
    int fd=0;   //gile discripter 
    char arr[20];
    int ret=0;
    
    fd=open("Marvellous.txt",O_RDWR);    //creat is system call ahe
    
    ret=read(fd,arr,10);    //(kashatun wachaycha,kashat wachaycha,kiti wachaycha)

    printf("%d bytes gets read from the file\n",ret);
    printf("data is : %s\n",arr);

    close(fd);

    return 0;
}

//marvellous navachi file tyar hoil ppa folder madhye navin program compile kelyavar
//O_RDONLY: READ
//O_WRONLY: WRITE
//O_RDWR: READ+WRITE
