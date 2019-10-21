/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcstore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobert- <srobert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:58:38 by srobert-          #+#    #+#             */
/*   Updated: 2019/04/11 17:35:34 by srobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_myfunc	*funcstore(void)
{
	t_myfunc *arr;

	arr = (t_myfunc*)malloc(sizeof(*arr) * 19);
	arr[0] = square_check;
	arr[1] = stick_hor_check;
	arr[2] = stick_vert_check;
	arr[3] = knight_hor_check3;
	arr[4] = snake_hor_check1;
	arr[5] = snake_hor_check2;
	arr[6] = knight_vert_check2;
	arr[7] = tank_vert_check2;
	arr[8] = knight_vert_check3;
	arr[9] = knight_hor_check2;
	arr[10] = knight_vert_check4;
	arr[11] = knight_hor_check1;
	arr[12] = knight_vert_check1;
	arr[13] = knight_hor_check4;
	arr[14] = tank_vert_check1;
	arr[15] = tank_hor_check1;
	arr[16] = tank_hor_check2;
	arr[17] = snake_vert_check1;
	arr[18] = snake_vert_check2;
	return (arr);
}
