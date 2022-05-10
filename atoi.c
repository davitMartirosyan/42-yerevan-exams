/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:39:52 by dmartiro          #+#    #+#             */
/*   Updated: 2022/05/10 06:50:15 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examrank.h"

int	datoi(char *toatoi)
{
	int	i;
	int	m;
	int	number;

	i = 0;
	m = 1;
	number = 0;
	while (toatoi[i] == '\n' || toatoi[i] == '\t'
		|| toatoi[i] == '\f' || toatoi[i] == ' ')
		i++;
	if (toatoi[i] == '-')
	{
		m = -1;
		i++;
	}
	while (toatoi[i] >= '0' && toatoi[i] <= '9')
	{
		number = number * 10 + toatoi[i] - '0';
		i++;
	}
	return (number * m);
}