/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login       <login@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:57:41 by login             #+#    #+#             */
/*   Updated: 2023/07/10 14:57:41 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	char			*value_str;
	long int		value;
	char			*name;
	struct s_list	*next;
}	t_list;

char		*get_dict_info(char *filename);
char		*find(t_list *list, long int n);
t_list		*set_list(char *dict);
long int	ft_atoi(char *str);
void		print_tens(t_list *list, long int *nbr);
void		print_number(t_list *list, long int nbr);
void		ft_putstr(char *str);

#endif