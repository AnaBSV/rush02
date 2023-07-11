/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login   @student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:52:06 by login             #+#    #+#             */
/*   Updated: 2023/07/10 14:52:06 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find(t_list *list, long int n)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		if (tmp->value == n)
		{
			return (tmp->name);
		}
		tmp = tmp->next;
	}
	return (0);
}
