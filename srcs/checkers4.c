/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:27:35 by david             #+#    #+#             */
/*   Updated: 2019/04/09 17:31:33 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	tank_hor_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (i < 2 && j < 3 && str[i + 1][j] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 2][j] == '#')
	{
		ft_dlst_pushback(fgs, tank_hor_fill1);
		return (1);
	}
	return (0);
}

int	tank_hor_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 0 && i < 2 && str[i + 1][j] == '#' &&
	str[i + 1][j - 1] == '#' && str[i + 2][j] == '#')
	{
		ft_dlst_pushback(fgs, tank_hor_fill2);
		return (1);
	}
	return (0);
}

int	snake_vert_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 0 && i < 2 && str[i + 1][j] == '#' &&
	str[i + 1][j - 1] == '#' && str[i + 2][j - 1] == '#')
	{
		ft_dlst_pushback(fgs, snake_vert_fill1);
		return (1);
	}
	return (0);
}

int	snake_vert_check2(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 3 && i < 2 && str[i + 1][j] == '#' &&
	str[i + 1][j + 1] == '#' && str[i + 2][j + 1] == '#')
	{
		ft_dlst_pushback(fgs, snake_vert_fill2);
		return (1);
	}
	return (0);
}
