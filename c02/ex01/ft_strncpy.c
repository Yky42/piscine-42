/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaspeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:49:16 by ykaspeli          #+#    #+#             */
/*   Updated: 2022/08/22 20:33:00 by ykaspeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy( char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
