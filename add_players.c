/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_players.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 10:59:50 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/20 11:26:09 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pong.h"

void			add_players(char tab[21][61])
{
	tab[8][2] = '|';
	tab[9][2] = '|';
	tab[10][2] = '|';
	tab[8][57] = '|';
	tab[9][57] = '|';
	tab[10][57] = '|';
}
