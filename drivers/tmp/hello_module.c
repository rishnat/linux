#include <linux/module.h>


static int __init insert_hello(void)
{
printk(KERN_INFO "Hello module inserted\n");
return 0;
}

static void __exit remove_hello(void)
{
printk(KERN_DEBUG "Hello module removed\n");
}


module_init(insert_hello);
module_exit(remove_hello);

MODULE_LICENSE("GPL");

