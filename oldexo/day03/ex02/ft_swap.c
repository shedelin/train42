#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

int main(void)
{
	int int1;
	int int2;
	int *ptr1;
	int *ptr2;

	int1 = 42;
	int2 = 4242;
	ptr1 = &int1;
	ptr2 = &int2;

	ft_swap(ptr1, ptr2);

	printf("%d\n %d\n", int1, int2);

	return (0);
}
