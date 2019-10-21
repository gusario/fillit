/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:52:10 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 18:03:48 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include "../libft/libft.h"
# include <stdio.h>
# include "stdlib.h"
# include "fcntl.h"
# include "unistd.h"

# define USAGE_MSG "usage: ./fillit source_file"

typedef struct			s_mapcache
{
	char				**govno;
	char				**map;
	int					side;
	int					i;
	int					j;
}						t_mapcache;

typedef int	(*t_myfill)(t_mapcache **mapa, char c);

typedef struct			s_dlist
{
	struct s_dlist		*next;
	struct s_dlist		*prev;
	t_myfill			func;

}						t_dlist;

typedef struct			s_dblist
{
	t_dlist				*head;
	t_dlist				*tail;
	int					size;

}						t_dblist;

typedef int	(*t_myfunc)(char **str, int i, int j, t_dblist *fgs);

typedef struct			s_maplist
{
	struct s_maplist	*next;
	char				**map;
	int					i;
	int					j;
}						t_maplist;

t_dblist				*createdblist();
void					deletedblinkedlist(t_dblist **list);
void					deletelist(t_maplist **head, int side);
t_dlist					*ft_dlst_new(t_myfill function);
void					ft_dlst_pushback(t_dblist *root, t_myfill function);
int						ft_dlst_count(t_dblist **root);
void					push(t_maplist **head, char **mapa, int i, int j);
void					pop(t_maplist **head, int side);
t_myfunc				*funcstore(void);
int						square_check(char **str, int i, int j, t_dblist *fgs);
int						stick_vert_check(char **str, int i, \
						int j, t_dblist *fgs);
int						stick_hor_check(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_hor_check3(char **str, int i, \
						int j, t_dblist *fgs);
int						snake_hor_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						snake_hor_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_vert_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						tank_vert_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_vert_check3(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_hor_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_vert_check4(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_hor_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_vert_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						knight_hor_check4(char **str, int i, \
						int j, t_dblist *fgs);
int						tank_vert_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						tank_hor_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						tank_hor_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						snake_vert_check1(char **str, int i, \
						int j, t_dblist *fgs);
int						snake_vert_check2(char **str, int i, \
						int j, t_dblist *fgs);
int						stick_vert_fill(t_mapcache **mapa, char c);
int						stick_hor_fill(t_mapcache **mapa, char c);
int						knight_hor_fill3(t_mapcache **mapa, char c);
int						knight_vert_fill2(t_mapcache **mapa, char c);
int						snake_hor_fill1(t_mapcache **mapa, char c);
int						snake_hor_fill2(t_mapcache **mapa, char c);
int						square_fill(t_mapcache **mapa, char c);
int						tank_vert_fill2(t_mapcache **mapa, char c);
int						knight_vert_fill3(t_mapcache **mapa, char c);
int						knight_hor_fill2(t_mapcache **mapa, char c);
int						knight_vert_fill4(t_mapcache **mapa, char c);
int						knight_hor_fill1(t_mapcache **mapa, char c);
int						knight_vert_fill1(t_mapcache **mapa, char c);
int						knight_hor_fill4(t_mapcache **mapa, char c);
int						tank_vert_fill1(t_mapcache **mapa, char c);
int						tank_hor_fill1(t_mapcache **mapa, char c);
int						tank_hor_fill2(t_mapcache **mapa, char c);
int						snake_vert_fill1(t_mapcache **mapa, char c);
int						snake_vert_fill2(t_mapcache **mapa, char c);
int						first_check(int fd);
int						figure_catcher(int fd, t_myfunc *arr, t_dblist *fgs);
int						coordinates(char **str, int *k);
void					print(char **str, int l);
char					**mapcreator(int i);
char					**ft_copy(char **map, int size);
void					analyzer(t_dblist *root);
int						filler(t_maplist **lsmap, t_dblist *root, \
						t_mapcache **mapa);
void					good_fill(t_mapcache **mapa, t_dlist **node, \
						t_maplist **lsmap, int *k);
void					bad_fill(t_mapcache **mapa, t_dlist **node, \
						t_maplist **lsmap, int *k);
void					distributor(int fun, t_mapcache **mapa);
void					feel_free(char **buf1, int side);
#endif
