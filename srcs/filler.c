/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:34:35 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 21:11:33 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

static void		huy(t_maplist **lsmap, t_mapcache **mapa, t_dlist *node)
{
	print((*lsmap)->map, (*mapa)->side);
	free(node);
}

static	void	escho_odin_kostil(t_maplist **lsmap,
			t_dblist *root, t_mapcache **mapa)
{
	if (!root || !(*lsmap) || !(*mapa))
		exit(1);
}

int				filler(t_maplist **lsmap, t_dblist *root, t_mapcache **mapa)
{
	int		k;
	int		fun;
	t_dlist	*node;

	escho_odin_kostil(lsmap, root, mapa);
	k = 0;
	node = root->head;
	while (k < root->size)
	{
		(*mapa)->map = ft_copy((*lsmap)->map, (*mapa)->side);
		fun = node->func(mapa, 'A' + k);
		if (fun == 1)
			good_fill(mapa, &node, lsmap, &k);
		else if (fun == -1)
		{
			bad_fill(mapa, &node, lsmap, &k);
			if (k < 0)
				return (0);
		}
		else
			distributor(fun, mapa);
		feel_free((*mapa)->map, (*mapa)->side);
	}
	huy(lsmap, mapa, node);
	exit(1);
}
