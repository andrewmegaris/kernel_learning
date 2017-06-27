obj−m += hello-world-1.o
obj-m += hello-world-2.o
obj-m += hello-world-3.o
obj-m += hello-world-4.o
obj-m += hello-world-5.o
obj-m += startstop.o
startstop-objc := start.o stop.o

all:
		make −C /lib/modules/$(shell uname −r)/build M=$(PWD) modules

clean:
		make −C /lib/modules/$(shell uname −r)/build M=$(PWD) clean

