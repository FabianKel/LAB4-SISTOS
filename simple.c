#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

static int __init simple_init(void) {
    printk(KERN_INFO "Loading Module\nMyCustomModule\n");
    return 0;
}

static void __exit simple_exit(void) {
    printk(KERN_INFO "Removing Module\nMyCustomModule\n");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A simple kernel module");
MODULE_AUTHOR("Derek Arreaga");