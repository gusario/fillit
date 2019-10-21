/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 21:01:13 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/08 15:18:27 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	knight_hor_fill3(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 2)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 3)
		return (-2);
	if ((*mapa)->side - (*mapa)->j >= 3 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 2])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 2]) == 0))
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 2] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 2] = c;
		return (1);
	}
	return (0);
}

int	snake_hor_fill1(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 2)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 2)
		return (-2);
	if ((*mapa)->j > 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1] = c;
		return (1);
	}
	return (0);
}

int	square_fill(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 2)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 2)
		return (-2);
	if ((ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1] = c;
		return (1);
	}
	return (0);
}

int	stick_hor_fill(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 1)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 4)
		return (-2);
	if ((ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 2])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j + 3])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 2] = c;
		(*mapa)->map[(*mapa)->i][(*mapa)->j + 3] = c;
		return (1);
	}
	return (0);
}

int	stick_vert_fill(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 4)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 1)
		return (-2);
	if ((ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 2][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 3][(*mapa)->j])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 2][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 3][(*mapa)->j] = c;
		return (1);
	}
	return (0);
}
