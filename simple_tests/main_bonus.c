/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:08:17 by lade-lim          #+#    #+#             */
/*   Updated: 2022/07/07 16:59:27 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*gnl;

	fd1 = open("fd1_moveis_coloniais_de_acaju", O_RDONLY);
	fd2 = open("fd2_xodo", O_RDONLY);
	gnl = (char *)"initializing";
	gnl = get_next_line(fd1);
	printf("FD01 | First Line:\t%s\n", gnl);
	free(gnl);
	gnl = get_next_line(fd2);
	printf("FD02 | First Line:\t%s\n", gnl);
	free(gnl);
	gnl = get_next_line(fd1);
	printf("FD01 | Second Line:\t%s\n", gnl);
	free(gnl);
	gnl = get_next_line(fd2);
	printf("FD02 | Second Line:\t%s\n", gnl);
	free(gnl);
	gnl = get_next_line(fd1);
	printf("FD01 | Third Line:\t%s\n", gnl);
	free(gnl);
	gnl = get_next_line(fd2);
	printf("FD02 | Third Line:\t%s", gnl);
	free(gnl);
	return (0);
}
