/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:44:18 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/06 20:26:27 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*final_str;

	final_str = dest;
	while (*final_str != '\0')
	{
		++final_str;
	}
	while ((*final_str++ = *src++))
		;
	return (final_str);
}
