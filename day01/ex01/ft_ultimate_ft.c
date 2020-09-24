#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int nb;
	int *ptr;
	void *ptr1;
	void *ptr2;
	void *ptr3;
	void *ptr4;
	void *ptr5;
	void *ptr6;
	void *ptr7;
	void *ptr8;

	nb = 21;
	ptr = &nb;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	ft_ultimate_ft(ptr8);
	ft_putchar(nb);
	return (0);
}