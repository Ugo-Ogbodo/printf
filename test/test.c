#include "_main.h"

void print_(int *i)
{
	int j = *i;

	j += 2;

	*i = j;
}
int main(void)
{
	int i = 2;

	print_(&i);

	printf("%d\n", i);;
	return (0);
}
