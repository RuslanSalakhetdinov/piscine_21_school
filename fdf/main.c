/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <cwheatgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:47:49 by cwheatgr          #+#    #+#             */
/*   Updated: 2020/02/18 22:22:25 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int argc, char **argv)
{
	t_form	*form;
	int		i;
	int		j;

	if (argc != 2)
	{
		ft_putstr("error, check your arguments!!!\n");
		return (0);
	}
	form = form_new(argv[1]);
	form->zoom = 30;
	form->shift = 200;
	form->mlx_ptr = mlx_init();
	form->win_ptr = mlx_new_window(form->mlx_ptr, 1920, 1080, "MAP");
	print_map(form);
	mlx_loop(form->mlx_ptr);
	return (0);
}