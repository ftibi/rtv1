/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 16:54:20 by tfolly            #+#    #+#             */
/*   Updated: 2016/05/24 17:10:57 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include "mlx.h"
# include "libft/includes/libft.h"

/*
** defines pour les differents types de formes que je peux gerer
*/

# define PLAN 0
# define SPHERE 1
# define CONE 2
# define CYLINDRE 3

typedef struct	s_objs
{
	int				color;
	int				x;
	int				y;
	int				shape;
	int				size;
	struct s_objs	*next;
}				t_objs;

typedef struct	s_scene
{
	t_objs		*objs;
	int			size;
}				t_scene;

t_objs			*new_objs(int color, int x, int y, int shape, int size);

#endif
