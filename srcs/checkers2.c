/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:27:12 by david             #+#    #+#             */
/*   Updated: 2019/04/09 17:30:56 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	snake_hor_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 2 && i < 3 && str[i][j + 1] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 1][j + 2] == '#')
	{
		ft_dlst_pushback(fgs, snake_hor_fill2);
		return (1);
	}
	return (0);
}

int	knight_vert_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 3 && i < 2 && str[i][j + 1] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 2][j + 1] == '#')
	{
		ft_dlst_pushback(fgs, knight_vert_fill2);
		return (1);
	}
	return (0);
}

int	tank_vert_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (i < 3 && j < 2 && str[i][j + 1] == '#' &&
	str[i][j + 2] == '#' && str[i + 1][j + 1] == '#')
	{
		ft_dlst_pushback(fgs, tank_vert_fill2);
		return (1);
	}
	return (0);
}

int	knight_vert_check3(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 3 && i < 2 && str[i + 1][j] == '#' &&
	str[i + 2][j] == '#' && str[i + 2][j + 1] == '#')
	{
		ft_dlst_pushback(fgs, knight_vert_fill3);
		return (1);
	}
	return (0);
}

int	knight_hor_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 2 && i < 3 && str[i + 1][j] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 1][j + 2] == '#')
	{
		ft_dlst_pushback(fgs, knight_hor_fill2);
		return (1);
	}
	return (0);
}
