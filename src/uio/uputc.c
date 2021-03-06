/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uputc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:34:12 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <uio.h>

int	uputc(int ch)
{
	return (ufputc(STDOUT_FILENO, ch));
}
