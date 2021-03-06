/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwheatgr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:37:34 by cwheatgr          #+#    #+#             */
/*   Updated: 2019/09/25 05:14:32 by cwheatgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_eval_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	str[10];
	int		i;

	i = 10;
	while (--i >= 0)
	{
		str[i] = '0';
	}
	i++;
	n = ft_eval_fd(n, fd);
	while (n / 10 != 0)
	{
		str[i] += n % 10;
		n /= 10;
		i++;
	}
	ft_putchar_fd(n + '0', fd);
	while (--i >= 0)
	{
		ft_putchar_fd(str[i], fd);
	}
}
