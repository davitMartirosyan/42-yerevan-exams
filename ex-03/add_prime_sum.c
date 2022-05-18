#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char ch)
{
	write(1, &ch, 1);
}
int ft_atoi(char *n)
{
	int num;

	num = 0;
	while(*n >= '0' && *n <= '9')
		num = num * 10 + *n++ - '0';
	return (num);
}
void ft_putnbr(int nbr)
{
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
int is_prime(int n)
{
	int c;

	c = 2;
	while(c < n)
		if(!(n % c++))
			return (0);
	return (1);
}

void add_prime_sum(int n)
{
	int counter;
	int i;

	counter = 0;
	i = 1;
	while(++i <= n)
		if(is_prime(i))
			counter += i;
	ft_putnbr(counter);
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		add_prime_sum(ft_atoi(av[1]));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
