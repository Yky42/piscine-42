/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaspeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:42:40 by ykaspeli          #+#    #+#             */
/*   Updated: 2022/08/23 14:01:52 by ykaspeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2 [i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%d", ft_strcmp(argv[1], argv[2]));
}
// ./a.out test1 test2
// [
//	"./a.out",
//	"test1",
//	"test2"
// ]
