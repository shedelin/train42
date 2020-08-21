#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int f(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * f(nb - 1)); 	// f(5) ; return (5 * f(4))<-----
       						// f(4)	: return (4 * f(3))<----|
						// f(3) : return (3 * f(2))<---|
						// f(2) : return (2 * f(1))<--|
						// f(1) : return (1 * f(0))<-|
						// f(0) : return (1) -------|
}

int main()
{
	int rst;

	rst = 121;
	rst = f(5); // 5! = 5 * 4 * 3 * 2 * 1 = 120
	ft_putchar(rst);
	return (0);
}
