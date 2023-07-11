/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:00:10 by login             #+#    #+#             */
/*   Updated: 2023/07/10 15:00:10 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	reverse_list(t_list **list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	prev = NULL;
	current = *list;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*list = prev;
}

int	main(int argc, char **argv)
{
	long int	nbr;
	char		*dict;
	t_list		*list;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		dict = get_dict_info("numbers.dict");
		list = set_list(dict);
		reverse_list(&list);
		if (nbr == 0)
		{
			ft_putstr(find(list, 0));
			return (0);
		}
		if ((nbr / list->value) >= 1000)
		{
			ft_putstr("Dict limit exceeded!\n");
			return (0);
		}
		print_number(list, nbr);
		ft_putstr("\n");
	}
}
