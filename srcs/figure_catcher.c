/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure_catcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:35:10 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 22:37:16 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	coordinates(char **str, int *k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (str[i][j] == '#')
			{
				*k = i;
				return (j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	exit(1);
}

int	figure_catcher(int fd, t_myfunc *arr, t_dblist *fgs)
{
	int		i;
	int		j;
	int		k;
	char	buf[21];
	char	**buf1;

	while ((read(fd, buf, 21)))
	{
		if (!(buf1 = ft_strsplit(buf, '\n')))
			exit(1);
		j = coordinates(buf1, &i);
		k = 0;
		while (k < 19 && !(arr[k](buf1, i, j, fgs)))
			k++;
		feel_free(buf1, 4);
		if (k >= 19)
		{
			ft_putstr("error\n");
			exit(1);
		}
	}
	free(arr);
	return (0);
}
