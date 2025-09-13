#include <linux/module.h>
#include <linux/init.h>

int init(void) {
  printk("Hello Kernel\n");
  return 0;
}

void exit(void) {
  printk("Gooddbye Kernel!");
}


module_init(init);
module_exit(exit);

MODULE_LICENSE("GPL");
