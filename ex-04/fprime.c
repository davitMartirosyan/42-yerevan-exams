/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 03:04:23 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/31 03:48:18 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *n)
{
    int c;
    int s;

    c = 0;
    s = (*n == '-') ? -1 : 1;
    (*n == '-' || *n == '+') ? n++ : 0;
    while(*n >= '0' && *n <= '9')
    {
        c = c * 10 + *n++ - '0';
    }
    return (c * s);
}

void ft_pnbr(int n)
{
    if(n > 9)
        ft_pnbr(n / 10);
    n = n % 10 + '0';
    write(1, &n, 1);
}

// my logic
void fprime(int factorize)
{
    int cp;
    int c;

    c = 2;
    cp = factorize;
    if(factorize == 1)
    {
        ft_pnbr(factorize);
        return ;
    }
    while(factorize != 1)
    {
        while(factorize % c == 0)
        {
            ft_pnbr(c);
            factorize /= c;  
            if(factorize != 1) 
                write(1, "*", 1);
        }
        c++;
    }
}

//other logic
void	f_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb /= i;
			i--;
		}
		i++;
	}
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
        f_prime(atoi(av[1]));
        // ft_pnbr(5);
        // printf("%d", ft_atoi(av[1]));
    }
    printf("\n");
}




// Assignment name  : fprime
// Expected files   : fprime.c
// Allowed functions: printf, atoi
// --------------------------------------------------------------------------------

// Write a program that takes a positive int and displays its prime factors on the
// standard output, followed by a newline.

// Factors must be displayed in ascending order and separated by '*', so that
// the expression in the output gives the right result.

// If the number of parameters is not 1, simply display a newline.

// The input, when there's one, will be valid.

// Examples:

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $