/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_positive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:07:56 by login             #+#    #+#             */
/*   Updated: 2023/07/10 15:07:56 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

long int	ft_atoi(char *str)
{
	long int	n;
	int			i;

	i = 0;
	n = 0;
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{	
			write(1, "Invalid Argument!", 18);
			return (-1);
		}
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
