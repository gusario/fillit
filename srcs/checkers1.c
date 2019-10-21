/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:46:50 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/06 15:46:13 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	knight_hor_check3(char **str, int i, int j, t_dblist *fgs)
{
	if (j < 2 && i < 3 && str[i][j + 1] == '#' &&
	str[i][j + 2] == '#' && str[i + 1][j + 2] == '#')
	{
		ft_dlst_pushback(fgs, knight_hor_fill3);
		return (1);
	}
	return (0);
}

int	snake_hor_check1(char **str, int i, int j, t_dblist *fgs)
{
	if (j > 0 && j < 3 && i < 3 && str[i][j + 1] == '#' &&
	str[i + 1][j] == '#' && str[i + 1][j - 1] == '#')
	{
		ft_dlst_pushback(fgs, snake_hor_fill1);
		return (1);
	}
	return (0);
}

int	square_check(char **str, int i, int j, t_dblist *fgs)
{
	if (i < 3 && j < 3 && str[i][j + 1] == '#' &&
	str[i + 1][j] == '#' && str[i + 1][j + 1] == '#')
	{
		ft_dlst_pushback(fgs, square_fill);
		return (1);
	}
	return (0);
}

int	stick_hor_check(char **str, int i, int j, t_dblist *fgs)
{
	if (j == 0 && str[i][j + 1] == '#' &&
	str[i][j + 2] == '#' && str[i][j + 3] == '#')
	{
		ft_dlst_pushback(fgs, stick_hor_fill);
		return (1);
	}
	return (0);
}

int	stick_vert_check(char **str, int i, int j, t_dblist *fgs)
{
	if (i == 0 && str[i + 1][j] == '#' &&
	str[i + 2][j] == '#' && str[i + 3][j] == '#')
	{
		ft_dlst_pushback(fgs, stick_vert_fill);
		return (1);
	}
	return (0);
}
