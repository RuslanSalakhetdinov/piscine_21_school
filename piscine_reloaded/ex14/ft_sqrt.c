/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:37:16 by cwheatgr          #+#    #+#             */
/*   Updated: 2019/09/03 14:51:25 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (++i <= nb / 2 && i <= 46340)
	{
		if (i * i == nb)
			return (i);
	}
	return (0);
}
