/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handle_Imput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basile <basile@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:15:46 by basile            #+#    #+#             */
/*   Updated: 2025/04/15 17:00:36 by basile           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/So_Long.h"

int handle_imput(int keycode, t_mlx_data *data)
{
    ft_printf("hello from Keyhook%i,\n", keycode);
    if (keycode == 99)
        kill_win(data);
    return (0);
}

