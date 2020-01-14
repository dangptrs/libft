/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 23:30:53 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/14 19:59:36 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>
#include <ft_stdlib.h>

int	ft_vasprintf(char **strp, const char *fmt, va_list ap)
{
	int		l;
	va_list	ap_copy;

	va_copy(ap_copy, ap);
	l = vsnprintf(NULL, 0, fmt, ap_copy);
	va_end(ap_copy);
	if (l < 0 || !(*strp = malloc(l + 1U)))
		return (-1);
	return (vsnprintf(*strp, l + 1U, fmt, ap));
}
