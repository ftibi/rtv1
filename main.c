/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 19:36:12 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/25 18:26:39 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libft/includes/libft.h"
#include "includes/rtv1.h"
/*
** Donc je vais d'abord essayer de raytracer une sphere simple
*/

int		main(void)
{
	void	*img;
	void	*win;
	void	*mlx;
	char	*datastr;
	int bpp = 4;
	int size_line = SIZE * bpp / 8;
	int end = 1;
	t_objs *sphere;
	t_data *data;

	mlx = mlx_init();
	win = mlx_new_window(mlx, SIZE, SIZE, "RTv1");
	img = mlx_new_image(mlx, SIZE, SIZE);
	datastr = mlx_get_data_addr(img, &bpp, &size_line, &end);
	data = data_init(mlx, img, datastr, bpp, end);
	// creation d'un objet
	int size = 50;
	t_vec pos;
	pos.x = SIZE / 2;
	pos.y = SIZE / 2;
	pos.z = SIZE;
	sphere = add_objs(0xFF0000, SPHERE, size, pos, pos, 0);
	// remplissage de data
	calc_plan(datastr, sphere, data);
	mlx_put_image_to_window(mlx, win, img, 0, 0);
	mlx_key_hook(win, my_key_funct, 0);
	mlx_loop(mlx);
	return (0);
}
