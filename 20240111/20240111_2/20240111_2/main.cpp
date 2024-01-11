#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;

	p = &i;

	//*p = *p + 1;

	printf("p = %p\n", p);
	printf("&i = %p\n\n", &i);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p+1);
	
	return 0;
}