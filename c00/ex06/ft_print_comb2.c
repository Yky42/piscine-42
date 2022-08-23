/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaspeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:54:59 by ykaspeli          #+#    #+#             */
/*   Updated: 2022/08/17 11:59:33 by ykaspeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	shownb(int nb)
{
	int	nb1;
	int	nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int	g;
	int	h;

	g = 0;
	h = 0;
	while (g <= 99)
	{
		h = g + 1;
		while (h <= 99)
		{
			shownb(g);
			write(1, " ", 1);
			shownb(h);
			if (!(g == 98 && h == 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			h++;
		}
		g++;
	}
}
