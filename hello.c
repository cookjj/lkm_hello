/* my first hello.ko */

#undef  __KERNEL__
#define __KERNEL__

#undef MODULE
#define MODULE

#include <linux/module.h> // for making modules
#include <linux/kernel.h> // KERN_INFO macro
#include <linux/init.h>   // __init and __exit macro defs


static int __init
hello_init(void)
{
    printk(KERN_INFO "Hello y'all from new kernel module.\n");
    return 0;
}


static void __exit
hello_cleanup(void)
{
    printk(KERN_INFO "Cleaning up hello.ko module. Bye.\n");
    return;
}

/* these are macros for registering our functions */
/* by name instead of using std naming */
module_init(hello_init);
module_exit(hello_cleanup);





