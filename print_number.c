/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:53:20 by login             #+#    #+#             */
/*   Updated: 2023/07/11 00:53:20 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_tens(t_list *list, long int *nbr)
{
	ft_putstr(find(list, (*nbr / 10) * 10));
	*nbr %= 10;
	if (*nbr > 0 && *nbr < 10)
		ft_putstr("-");
	else if (*nbr > 0)
		ft_putstr(" ");
}

void	check_space(long int n)
{
	if (n != 0)
		ft_putstr(" ");
}

void	print_number(t_list *list, long int nbr)
{
	while (list)
	{
		if (nbr >= list->value)
		{
			if (nbr >= 100)
			{
				print_number(list, nbr / list->value);
				if (list->value != 0)
				{
					ft_putstr(" ");
					ft_putstr(find(list, list->value));
				}
				nbr %= list->value;
				check_space(nbr);
			}
			else if (nbr >= 20)
				print_tens(list, &nbr);
			else if (nbr != 0)
			{
				ft_putstr(find(list, nbr));
				return ;
			}
		}
		list = list->next;
	}
}
