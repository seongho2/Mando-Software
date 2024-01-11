#include <stdio.h>

int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi=(int*)10000;
	pd = (double*)10000;
	printf("pc = %d, pc + 1 = %d pc + 2 = %d\n", pc, pc + 1, pc + 2);
	printf("pi = %d, pi + 1 = %d pi + 2 = %d\n", pi, pi + 1, pi + 2);
	printf("pd = %d, pd + 1 = %d pd + 2 = %d\n", pd, pd + 1, pd + 2);
	return 0;
}