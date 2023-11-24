/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:27:42 by marykman          #+#    #+#             */
/*   Updated: 2023/11/24 16:21:24 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "ft_point.h"

# define WIN_NAME		"So long but it's actually too long"
# define WIN_DIM		16 * 16 * 4, 16 * 16 * 4
# define MAPFILE_SUFFIX	".ber"

# define PLAYER_CHAR	'P'
# define COIN_CHAR		'C'
# define EXIT_CHAR		'E'
# define SPECIAL_CHAR	"PCE"


typedef struct s_map
{
	int		**tab;
	int		player_count;
	t_point	player_pos;
	t_point	size;
}	t_map;

typedef enum e_error
{
	SUCCESS,
	MALLOC_ERROR,
	MAP_WRONG_EXTENSION,
	MAP_FILE_NOT_FOUND,
	MAP_CLOSE_ERROR,
	PARSING_WRONG_LINE_LEN,
	PARSING_WRONG_CHAR,
	PARSING_MULTIPLE_PLAYER,
	ERROR_LEN
}	t_error;

t_error	parsing(t_map *map, const char *filename);

#endif
