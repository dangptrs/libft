/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uputc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/02/22 21:09:46 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	uputc(int ch)
{
	return (ufputc(FT_STDOUT, ch));
}
