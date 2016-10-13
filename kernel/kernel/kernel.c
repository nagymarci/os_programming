#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	//int buff[50];
	printf("Hello, kernel World %d!\n", 10);
}
