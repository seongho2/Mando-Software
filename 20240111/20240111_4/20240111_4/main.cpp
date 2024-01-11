#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;

	p = &i;

	printf("i = %d\n", i);

	*p = 20;
	printf("*p = %d\n", *p);

	return 0;
}