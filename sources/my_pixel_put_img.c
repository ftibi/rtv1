/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_pixel_put_img.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 16:58:19 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 17:19:43 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rtv1.h"

//plus tard je mettrais tous les params dans la struct data
void		my_pixel_put_img(void *mlx, int bpp, int x, int y, int color, char *data)
{
	unsigned char	color1;
	unsigned char	color2;
	unsigned char	color3;
	unsigned int	ucolor;

	ucolor = mlx_get_color_value(mlx, color);
	color1 = (ucolor & 0xFF0000) >> 16;
	color2 = (ucolor & 0xFF00) >> 8;
	color3 = (ucolor & 0xFF);
	data[bpp / 8 * (x + (int)SIZE * y)] = color1;
	data[bpp / 8 * (x + (int)SIZE * y) + 1] = color2;
	data[bpp / 8 * (x + (int)SIZE * y) + 2] = color3;
}
