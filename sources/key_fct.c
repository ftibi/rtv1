/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_fct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/17 18:36:10 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 18:12:03 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

int		my_key_funct(int keycode)
{
	if (keycode == 53)
	{
		ft_putendl("exit");
		exit(0);
	}
	return (0);
}

int		mouse_pos(int x, int y)
{
	x++;
	y++;
	return (0);
}

int		my_mouse_funct(int button, int x, int y)
{
	button++;
	x++;
	y++;
	return (0);
}
