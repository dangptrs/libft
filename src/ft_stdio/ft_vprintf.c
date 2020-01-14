/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:02:59 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/13 20:04:15 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>

int	ft_vprintf(const char *fmt, va_list ap)
{
	return (vfprintf(stdout, fmt, ap));
}
