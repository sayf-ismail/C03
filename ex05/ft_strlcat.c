/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:44:18 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/08 21:23:42 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		a;
	unsigned int		b;
	unsigned int		c;
	unsigned int		d;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	if (size <= a)
	{
		d = b + size;
	}
	else
	{
		d = a + b;
	}
	c = 0;
	while (src[c] != '\0' && a < (size - 1))
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (d);
}
