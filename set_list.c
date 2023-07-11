/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_list.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login   @student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:01:45 by login             #+#    #+#             */
/*   Updated: 2023/07/10 15:01:45 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

void	set_value(char **dict, t_list **list)
{
	int	i;

	i = 0;
	(*list)->value_str = malloc(sizeof(char) * (get_len(*dict, ':') + 1));
	while (**dict != ':' && **dict)
	{
		(*list)->value_str[i++] = **dict;
		(*dict)++;
	}
	(*list)->value_str[i++] = '\0';
	(*list)->value = ft_atoi((*list)->value_str);
	*dict += 2;
}

void	set_name(char **dict, t_list **list)
{
	int	i;

	(*list)->name = malloc(sizeof(char) * (get_len(*dict, '\n') + 1));
	i = 0;
	while (**dict != '\n' && **dict)
	{
		(*list)->name[i++] = **dict;
		(*dict)++;
	}
	if (**dict == '\n')
		(*dict)++;
}

t_list	*set_list(char *dict)
{
	t_list	*list;
	t_list	*head;

	list = malloc(sizeof(t_list));
	list->next = NULL;
	head = list;
	while (*dict)
	{
		set_value(&dict, &list);
		set_name(&dict, &list);
		if (get_len(dict, ':'))
		{
			list->next = malloc(sizeof(t_list));
			list = list->next;
			list->next = NULL;
		}
	}
	return (head);
}
