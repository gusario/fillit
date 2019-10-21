/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:57:00 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 22:15:48 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	**mapcreator(int i)
{
	char	**map;
	int		k;
	int		m;

	if (!(map = (char**)malloc(sizeof(char*) * i)))
		exit(1);
	k = -1;
	while (++k < i)
		if (!(map[k] = malloc(i)))
			exit(1);
	k = 0;
	m = 0;
	while (k < i)
	{
		while (m < i)
		{
			map[k][m] = '.';
			m++;
		}
		m = 0;
		k++;
	}
	return (map);
}

void	analyzer(t_dblist *root)
{
	t_maplist	*lsmap;
	t_mapcache	*mapa;

	if (!root || !(mapa = (t_mapcache*)malloc(sizeof(t_mapcache))))
		exit(1);
	lsmap = NULL;
	mapa->i = 0;
	mapa->j = 0;
	mapa->side = 2;
	while (root->size * 4 > mapa->side * mapa->side)
		mapa->side++;
	mapa->map = mapcreator(mapa->side);
	push(&lsmap, mapa->map, 0, 0);
	while ((filler(&lsmap, root, &mapa)) == 0)
	{
		mapa->i = 0;
		mapa->j = 0;
		feel_free(mapa->map, mapa->side);
		mapa->side++;
		mapa->map = mapcreator(mapa->side);
		push(&lsmap, mapa->map, 0, 0);
	}
	deletelist(&lsmap, mapa->side);
	free(mapa);
	exit(1);
}
