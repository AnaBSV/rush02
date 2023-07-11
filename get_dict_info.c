/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-sous <ade-sous@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:59:58 by ade-sous          #+#    #+#             */
/*   Updated: 2023/07/10 14:59:58 by ade-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login    <login   @student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:43:45 by login             #+#    #+#             */
/*   Updated: 2023/07/10 14:43:45 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_dict_info(char *filename)
{
	int		i;
	int		rd;
	int		fd;
	char	c;
	char	*buffer;

	buffer = malloc(100000);
	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error while trying to open the file!\n", 37);
		free(buffer);
		return (0);
	}
	rd = read(fd, &c, sizeof(*buffer));
	while (rd > 0)
	{
		buffer[i++] = c;
		rd = read(fd, &c, sizeof(*buffer));
	}
	buffer[i] = '\0';
	if (rd == -1 || i == 0 || (!buffer[i - 1] && !rd))
		return (free(buffer), NULL);
	return (buffer);
}
