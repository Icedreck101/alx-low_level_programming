#include <stdio.h>

void pre_main_setup(void) __attribute__ ((constructor));

/**
* pre_main_setup - Function executed before the main function.
*/
void pre_main_setup(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

