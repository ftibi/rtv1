/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultfolly <thibaultfolly@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 18:22:28 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/29 17:31:31 by thibaultfolly    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

t_data			*data_init(void *mlx,void *img, char *datastr, int bpp, int end)
{
	t_data	*data;

	if (!(data = (t_data*)ft_memalloc(sizeof(t_data))))
		return (0);
	data->mlx = mlx;
	data->img = img;
	data->datastr = datastr;
	data->bpp = bpp;
	data->end = end;
	data->cam = vec_init(0, 0, 0);
	return (data);
}
