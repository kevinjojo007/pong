/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:29:48 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/20 10:37:35 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<unistd.h>
#include		"pong.h"

void			ft_putstr(char const *s)
{
	(void) write(1, s, ft_strlen(s));
}
