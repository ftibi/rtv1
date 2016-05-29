/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_fct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultfolly <thibaultfolly@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/17 18:36:10 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/29 18:23:19 by thibaultfolly    ###   ########.fr       */
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
	if (keycode == 123) //gauche
	{
		

	}
	if (keycode == 124) //droite
	{
	}
	if (keycode == 125) //bas
	{
	}
	if (keycode == 126) //haut
	{
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
