/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaspeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:47:23 by ykaspeli          #+#    #+#             */
/*   Updated: 2022/08/23 16:47:36 by ykaspeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		while (to_find[j] == '\0' || to_find[j] == str[i + j])
		{
			if (to_find[j] == '\0')
				return (str + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
