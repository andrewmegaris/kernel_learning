#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Andrew Megaris"
#define DRIVER_DESC "A Sample Driver"

static int __init hello_4_init(void){

    printk(KERN_INFO "Hello, World 4\n");
    return 0;
}

static void __exit hello_4_exit(void){

    printk(KERN_INFO "Goodbye, World 4\n");
}

module_init(hello_4_init);
module_exit(hello_4_exit);

MODULE_LISCENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODUlE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");

