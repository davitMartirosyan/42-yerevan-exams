/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:36:55 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/10 05:36:02 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *string, int *ascii)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (ascii[(int)string[i]] == 1)
		{
			write(1, &string[i], 1);
			ascii[(int)string[i]] = 2;
		}
		i++;
	}
}

void	print_union(char *s1, char *s2)
{
	int	ascii[256];
	int	i;

	i = 0;
	while (s1[i])
		ascii[(int)s1[i++]] = 1;
	i = 0;
	while (s2[i])
		ascii[(int)s2[i++]] = 1;
	print(s1, ascii);
	print(s2, ascii);
}

int	main(int count, char **vector)
{
	if (count == 3)
		print_union(vector[1], vector[2]);
	write(1, "\n", 1);
	return (0);
}

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// zpadintoqefwjy

// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// df6vewg4thras$
// df6vewg4thras$

// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// rienct phas$
// rienct phas$
