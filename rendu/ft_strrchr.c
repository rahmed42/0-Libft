/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 21:41:34 by rahmed            #+#    #+#             */
/*   Updated: 2021/09/25 20:20:24 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*check;

	i = 0;
	check = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			check = (char *)(s + i);
		i++;
	}
	if ((char)c == '\0')
		check = (char *)(s + i);
	return (check);
}
