/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kostils_4_filler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:02:59 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 21:12:08 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	good_fill(t_mapcache **mapa, t_dlist **node, t_maplist **lsmap, int *k)
{
	char **strgovno;

	strgovno = NULL;
	if (!(strgovno = ft_copy((*mapa)->map, (*mapa)->side)))
		exit(1);
	(*node) = (*node)->next;
	push(lsmap, strgovno, (*mapa)->i, (*mapa)->j);
	(*mapa)->govno = strgovno;
	(*mapa)->i = 0;
	(*mapa)->j = 0;
	(*k)++;
}

void	bad_fill(t_mapcache **mapa, t_dlist **node, t_maplist **lsmap, int *k)
{
	(*k)--;
	(*node) = (*node)->prev;
	if ((*lsmap)->j + 1 >= (*mapa)->side)
	{
		(*mapa)->j = 0;
		(*mapa)->i = (*lsmap)->i + 1;
	}
	else
	{
		(*mapa)->i = (*lsmap)->i;
		(*mapa)->j = (*lsmap)->j + 1;
	}
	pop(lsmap, (*mapa)->side);
}

void	distributor(int fun, t_mapcache **mapa)
{
	if (fun == 0)
		(*mapa)->j++;
	else if (fun == -2)
	{
		(*mapa)->j = 0;
		((*mapa)->i)++;
	}
}

char	**ft_copy(char **map, int size)
{
	char	**tmp;
	int		i;

	i = -1;
	if (size <= 0)
		return (NULL);
	if (!(tmp = (char**)malloc(sizeof(char*) * size)))
		exit(1);
	while (++i < size)
		if (!(tmp[i] = ft_strdup(map[i])))
			exit(1);
	return (tmp);
}

void	deletelist(t_maplist **head, int side)
{
	t_maplist *prev;

	prev = NULL;
	while (((*head)))
	{
		prev = (*head);
		(*head) = (*head)->next;
		side = 0;
		feel_free(prev->map, side);
		free(prev);
	}
	free(*head);
}
