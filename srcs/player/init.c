/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:52:01 by marykman          #+#    #+#             */
/*   Updated: 2023/12/21 19:59:06 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	player_init(t_player *player, t_point pos, t_img *assets)
{
	// ft_printf("pos : %d | %d\n", pos.x, pos.y);
	if (pos.x == -1 && pos.y == -1)
		return (0);
	player->pos = (t_point){
		pos.x * SPRITE_SIZE,
		pos.y * SPRITE_SIZE};
	player->direction = 0;
	player->frame = 0;
	player->assets = assets;
	return (1);
}
