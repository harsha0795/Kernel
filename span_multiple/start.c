#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
int init_module(void){
    printk ("Starting a module");
    return 0;
}
