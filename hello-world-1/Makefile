obj−m += hello-world-1.o
obj-m += hello-world-2.o
obj-m += hello-world-3.o

all:
		make −C /lib/modules/$(shell uname −r)/build M=$(PWD) modules

clean:
		make −C /lib/modules/$(shell uname −r)/build M=$(PWD) clean

