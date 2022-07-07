/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:12:42 by lade-lim          #+#    #+#             */
/*   Updated: 2022/07/07 16:59:57 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>
#include<fcntl.h>

int	main(void)
{
	int		fd;
	char	*gnl;

	fd = open("fd1_moveis_coloniais_de_acaju", O_RDONLY);
	printf("%d\n", fd);
	gnl = (char *)"initializing";
	while (gnl)
	{
		gnl = get_next_line(fd);
		printf("%s", gnl);
		free(gnl);
	}
	// close(fd);
	return (0);
}
