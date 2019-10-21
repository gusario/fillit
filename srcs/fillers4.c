/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 00:28:07 by david             #+#    #+#             */
/*   Updated: 2019/04/09 18:30:27 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	tank_hor_fill1(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 3)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 2)
		return (-2);
	if ((ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 2][(*mapa)->j])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i + 2][(*mapa)->j] = c;
		return (1);
	}
	return (0);
}

int	tank_hor_fill2(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 3)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 1)
		return (-2);
	if ((*mapa)->j > 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 2][(*mapa)->j])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1] = c;
		(*mapa)->map[(*mapa)->i + 2][(*mapa)->j] = c;
		return (1);
	}
	return (0);
}

int	snake_vert_fill1(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 3)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 1)
		return (-2);
	if ((*mapa)->j > 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 2][(*mapa)->j - 1])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j - 1] = c;
		(*mapa)->map[(*mapa)->i + 2][(*mapa)->j - 1] = c;
		return (1);
	}
	return (0);
}

int	snake_vert_fill2(t_mapcache **mapa, char c)
{
	if ((*mapa)->side - (*mapa)->i < 3)
		return (-1);
	if ((*mapa)->side - (*mapa)->j < 2)
		return (-2);
	if ((ft_isalpha((*mapa)->map[(*mapa)->i][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1])) == 0 &&
	(ft_isalpha((*mapa)->map[(*mapa)->i + 2][(*mapa)->j + 1])) == 0)
	{
		(*mapa)->map[(*mapa)->i][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j] = c;
		(*mapa)->map[(*mapa)->i + 1][(*mapa)->j + 1] = c;
		(*mapa)->map[(*mapa)->i + 2][(*mapa)->j + 1] = c;
		return (1);
	}
	return (0);
}
