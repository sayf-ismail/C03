/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:44:18 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/08 13:38:21 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i1;
	int		i2;
	int		j;

	i1 = 0;
	i2 = 0;
	j = 0;
	while (*(dest + i1) != '\0')
	{
		i1++;
	}
	
	i2 = i1;
	while (*(src + j) != '\0')
	{
		*(dest + i1) = *(src + j);
		i1++;
		j++;
	}
	if (size == 0)
	{
		return (unsigned int *)(i2);
	}
	else if (size <= i1)
	{
		return (unsigned int *)(size + j);
	}
	else
	{
		*(dest + i1) = '\0';
		return (unsigned int *)(i1);
	}
}
