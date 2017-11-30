#include<linux/init.h>
#include<linux/module.h>

static int helloWorld_init(void) {
    printk (KERN_ALERT "TEST : Hello World");
    return 0;
}

static void helloWorld_exit(void) {
    printk (KERN_ALERT "TEST : Bye");
}

module_init(helloWorld_init);
module_exit(helloWorld_exit);

MODULE_LICENSE ("GPL");