/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:15:25 by lade-lim          #+#    #+#             */
/*   Updated: 2022/07/02 23:25:34 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char) c)
			return (((char *)str) + i);
		i++;
	}
	if (str[i] != (unsigned char) c)
		return (0);
	if (str[i] == '\0')
		return (((char *)str) + i);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(const char *str)
{
	int		id;
	char	*dest;

	dest = malloc ((ft_strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	id = 0;
	while (str[id] != '\0')
	{
		dest[id] = str[id];
		id++;
	}
	dest[id] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*dest;

	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len >= len_s)
		len = len_s - start;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (s[i + start] && i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		s1len;
	int		s2len;
	int		i;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dest = malloc((s1len + s2len + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		dest[s1len + i] = s2[i];
		i++;
	}
	dest[s1len + i] = '\0';
	return (dest);
}
