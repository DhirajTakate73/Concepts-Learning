#include<stdio.h>   //printscanf
#include<fcntl.h>   //file control open close read write
#include<unistd.h>  //universal standard 

int main()
{
    int fd=0;   //gile discripter
    //          file ch nav   kasahyasathi
    fd=open("Marvellous.txt",O_RDWR);    //creat is system call ahe

    if(fd!=-1)
    {
        printf("file is successfully Opened with FD :%d\n",fd);
    }

    close(fd);

    return 0;
}

//marvellous navachi file tyar hoil ppa folder madhye navin program compile kelyavar
//O_RDONLY: READ
//O_WRONLY: WRITE
//O_RDWR: READ+WRITE

