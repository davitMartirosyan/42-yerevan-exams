/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 03:18:53 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/10 05:38:20 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	inter(char *s1, char *s2)
{
	int	ascii[256];
	int	i;

	i = 0;
	while (s2[i])
		ascii[(int)s2[i++]] = 1;
	i = 0;
	while (s1[i])
	{
		if (ascii[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			ascii[(int)s1[i]] = 2;
		}
		i++;
	}
}

int	main(int count, char **vector)
{
	if (count == 3)
		inter(vector[1], vector[2]);
	write(1, "\n", 1);
}

// ./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$

// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$

// $>./inter "nothing" "This sentence hides nothing" | cat -e
// nothig$
