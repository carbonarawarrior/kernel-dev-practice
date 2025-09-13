#include <linux/module.h>
#include <linux/init.h>

static int __init init(void) {
  printk("Hello Kernel\n");
  return 0;
}

static void __exit exit(void) {
  printk("Gooddbye Kernel!\n");
}


module_init(init);
module_exit(exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("carbonarawarriorr");
MODULE_DESCRIPTION("literal helloworld module");
