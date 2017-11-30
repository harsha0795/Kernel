#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE ("GPL");

static int myInt = 0;
module_param(myInt,int,S_IRUSR|S_IWUSR|S_IRGRP);

static int helloWorld_init(void) {
    printk (KERN_ALERT "TEST : Hello World");
    printk (KERN_INFO "CMD LINE : Integer = %d",myInt);
    return 0;
}

static void helloWorld_exit(void) {
    printk (KERN_ALERT "TEST : Bye");
}

module_init(helloWorld_init);
module_exit(helloWorld_exit);
