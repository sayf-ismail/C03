/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:02:55 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/08 16:30:08 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *first, char *second)
{
	while (*first && *second)
	{
		if (*first != *second)
			return (0);
		second++;
		first++;
	}
	return (*second == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
