#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
int is_space(char s)
{
	if(s == ' ' || s == '\t')
		return (1);
	else if(s >= 9 && s <= 13)
		return (1);
	return (0);
}

void epur_str(char *str)
{
	int c;

	c = 0;
	while(is_space(str[c]))
		c++;
	while(str[c])
	{
		if(!is_space(str[c]))
			write(1, &str[c], 1);
		while(is_space(str[c]) && is_space(str[c + 1]))
			c++;
		if(is_space(str[c]) && !is_space(str[c + 1]))
			write(1, &str[c], 1);
		c++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
}
