#include<stdio.h>
int main()
{
	int a=10,b=8;
		__asm__("movl %1, %%eax\n\t"
		"movl %%eax, %0\n\t"
		:"=r"(a)        /* output */
		:"r"(b)         /* input */
		:"%eax"         /* clobbered register */
		);
	printf("Result: %d %d\n",a,b);
	return 0;
}
