ifneq ($(KERNELRELEASE),)
	obj-m:=keylog.o
	
else
	KERNEL_SOURCE:=/usr/src/linux-headers-$(shell uname -r)
	PWD:=$(shell pwd)
	
default:
	make -C $(KERNEL_SOURCE) M=$(PWD) modules 
	
clean:
	make -C $(KERNEL_SOURCE) M=$(PWD) clean 
endif
