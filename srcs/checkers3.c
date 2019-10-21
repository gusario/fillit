/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:27:25 by david             #+#    #+#             */
/*   Updated: 2019/04/09 17:31:04 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	knight_vert_check4(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 0 && i < 2 && str[i + 1][j] == '#' &&
	str[i + 2][j] == '#' && str[i + 2][j - 1] == '#')
	{
		ft_dlst_pushback(fgs, knight_vert_fill4);
		return (1);
	}
	return (0);
}

int	knight_hor_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 1 && i < 3 && str[i + 1][j] == '#' &&
	str[i + 1][j - 1] == '#' && str[i + 1][j - 2] == '#')
	{
		ft_dlst_pushback(fgs, knight_hor_fill1);
		return (1);
	}
	return (0);
}

int	knight_vert_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 3 && i < 2 && str[i][j + 1] == '#' &&
	str[i + 1][j] == '#' && str[i + 2][j] == '#')
	{
		ft_dlst_pushback(fgs, knight_vert_fill1);
		return (1);
	}
	return (0);
}

int	knight_hor_check4(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 2 && i < 3 && str[i][j + 1] == '#' &&
	str[i][j + 2] == '#' && str[i + 1][j] == '#')
	{
		ft_dlst_pushback(fgs, knight_hor_fill4);
		return (1);
	}
	return (0);
}

int	tank_vert_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 0 && i < 3 && j < 3 && str[i + 1][j] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 1][j - 1] == '#')
	{
		ft_dlst_pushback(fgs, tank_vert_fill1);
		return (1);
	}
	return (0);
}
