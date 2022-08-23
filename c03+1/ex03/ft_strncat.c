/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaspeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:55:15 by ykaspeli          #+#    #+#             */
/*   Updated: 2022/08/22 18:05:25 by ykaspeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{	
		i++;
	}
	while (j < nb && src[j] != '\0' )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'
		return (dest);
}
