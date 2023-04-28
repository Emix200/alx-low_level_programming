#include <stdio>

/**
 * myStartupFun -apply the constructor feature
 * to myStartupFun() to eexecute before main()
 *
 * Return: ...
 */
void myStartupFun(void) __attribute__ ((construvtor));

/**
 * myStartupFun - execution of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
