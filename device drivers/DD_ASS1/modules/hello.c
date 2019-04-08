//Passing arguments to the kernel module

//hello.c : simplest kernel module code 




#include <linux/init.h>
#include <linux/module.h>
//step1
//#include <linux/moduleparam.h>
//step2 create a variable
static int hello_init(void){
//purpose of the above function is to register functionalities and allocate resources
printk(KERN_ALERT "TEST: Hello world,this is kmodule code which is inserted by CHAITANYA\n");//KERN_ALERT is used for prioritising the log information
//display();
return 0;
}
static void hello_exit(void){
//purpose is to unregister functionalities & deallocate resources
printk(KERN_ALERT "TEST:Good byte,from introductory kmodule code\n");
}
module_init(hello_init);//jump to the execution state
module_exit(hello_exit);//jumps to exit state
