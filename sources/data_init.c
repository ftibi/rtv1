/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 18:22:28 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 18:25:01 by tfolly           ###   ########.fr       */
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
	return (data);
}
