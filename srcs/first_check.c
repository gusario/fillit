/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:31:27 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/13 17:33:07 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

static	int		guts(char **buf1)
{
	int i;
	int j;
	int k;

	i = -1;
	k = 0;
	while (++i < 4)
	{
		if (ft_strlen(buf1[i]) != 4)
			return (-1);
		j = -1;
		while (++j < 4)
		{
			if (buf1[i][j] != '#' && buf1[i][j] != '.')
				return (-1);
			if (buf1[i][j] == '#')
				k++;
		}
	}
	if (k != 4)
		return (-1);
	return (0);
}

void			feel_free(char **buf1, int side)
{
	int i;

	i = -1;
	while (++i < side)
		if (buf1[i][0])
			free(buf1[i]);
	free(buf1);
}

static	void	bolshe_kostiley_bogu_kostiley(int keeper)
{
	if (keeper != 20)
	{
		ft_putstr("error\n");
		exit(1);
	}
}

int				first_check(int fd)
{
	char	buf[21];
	char	**buf1;
	int		keeper;
	int		read_len;

	buf1 = NULL;
	while ((read_len = read(fd, buf, 21)))
	{
		if (buf[19] != '\n' || buf[0] == '\n')
		{
			ft_putstr("error\n");
			exit(1);
		}
		keeper = read_len;
		if (!(buf1 = ft_strsplit(buf, '\n')))
			exit(1);
		if (guts(buf1) == -1)
		{
			ft_putstr("error\n");
			exit(1);
		}
		feel_free(buf1, 4);
	}
	bolshe_kostiley_bogu_kostiley(keeper);
	return (0);
}
