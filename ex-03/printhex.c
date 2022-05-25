#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *n)
{
	long result;
	int s;

	while(*n <= 32 || (*n >= 9 && *n <= 13))
		n++;
	s = (*n == '-') ?  -1 : 1;
	(*n == '-' || *n == '+') ? n++ : n;
	result = 0;
	while(*n >= '0' && *n <= '9')
	{
		result = result * 10 + *n++ - '0';
	}
	return ((int)result * s);
}

void ft_hex(int hex)
{
	if(hex >= 16)
		ft_hex(hex / 16);
	hex = hex % 16;
	hex += hex < 10 ? '0' : 'a' - 10;
	write(1, &hex, 1);
}

int main(int ac, char **av)
{
	printf("%d", ft_atoi("-155"));
//		ft_hex(ft_atoi("256"));
	write(1, "\n", 1);
}
