/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 11:46:16 by vlehuger          #+#    #+#             */
/*   Updated: 2014/03/12 19:16:41 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>
#include <libft.h> ///////////

int			main(void)
{
	t_lem	param;

	param.room = NULL;
	param.file = NULL;
	parser(&param);
	display_file(param.file);
//	lemin();
	return (0);
}
