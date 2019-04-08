obj-m = soliduscode.o

KERNEL_DIR = /usr/src/linux-headers-4.13.0-39-generic


all:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order *~
