#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *p = (int*)malloc(4);
	printf("%p", p);
	return 0x0;
}
