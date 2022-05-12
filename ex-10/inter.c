/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 03:18:53 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/12 01:59:17 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/examrank.h"

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