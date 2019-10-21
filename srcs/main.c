/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 20:38:31 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/13 17:27:46 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int argc, char *argv[])
{
	int			fd;
	t_dblist	*queen;

	if (argc != 2)
	{
		ft_putendl(USAGE_MSG);
		return (0);
	}
	queen = createdblist();
	if ((fd = open(argv[1], O_RDONLY)) <= 0 || first_check(fd) != 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	close(fd);
	if ((fd = open(argv[1], O_RDONLY)) <= 0 ||
	figure_catcher(fd, funcstore(), queen) != 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	analyzer(queen);
	deletedblinkedlist(&queen);
	return (0);
}
