/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_plan.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 17:47:21 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 19:12:20 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

void	calc_plan(char *datastr, t_objs *obj, t_data *data)
{
	int		i;
	int		j;
	t_vec	pt;
	t_vec	ray;
	t_vec	cam;
	t_objs	*obj_tmp;

	cam = vec_init(SIZE / 2, SIZE / 2, -SIZE / 2);
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			pt.x = i;
			pt.y = j;
			pt.z = 0;
			ray = two_points_ray(cam, pt);
			obj_tmp = obj;
			while (obj_tmp) //ici on va colorer l'image avec le dernier objet insere, on ne tient pas encore compte de la distance
			{
				if (sphere(obj_tmp, pt, ray))
					my_pixel_put_img(data->mlx, data->bpp, i, j, obj_tmp->color, datastr);
				obj_tmp = obj_tmp->next;
			}
			j++;
		}
		i++;
	}
}
