#include<linux/kernel.h>
#include<linux/module.h>

void cleanup_module(){
    printk ("Ending the Module");
}
