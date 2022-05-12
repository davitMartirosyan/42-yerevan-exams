/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:36:55 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 01:58:37 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/examrank.h"

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