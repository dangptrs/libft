/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:03:11 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:03:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int ch)
{
	while (1)
	{
		if (*str == ch)
			return ((char *)str);
		if (*str == '\0')
			return (NULL);
		str++;
	}
}