/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:04:45 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/06 19:40:30 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return (int)(unsigned char)(*s1) - (int)(unsigned char)(*s2);
}
