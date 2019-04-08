#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#define DEVICE "/home/chaitanya/soliduscode/Modules/solidusdevice"
int main(){
int i,fd;
char ch,write_buf[100],read_buf[100];
fd=open(DEVICE,O_RDWR);//open for reading and writing
if(fd==-1){
printf("file %s either does not exist or has been locked by another process\n",DEVICE);
exit(-1);
}
printf("r=read from device\nw=write to device\nenter command: ");
scanf("%c",&ch);
switch(ch){
       case 'w':
             printf("enter data: ");
             scanf(" %[^\n]",write_buf);
             write(fd,write_buf,sizeof(write_buf));//system call used to transfer the data from the user space to the kernel space
             break;
       case 'r':
             read(fd,read_buf,sizeof(read_buf));
             printf("device: %s\n",read_buf);
             break;
       default:
             printf("command not recognised\n");
             break;
           }
           close(fd);   

return 0;
}

