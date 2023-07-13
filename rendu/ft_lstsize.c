/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:30:03 by rahmed            #+#    #+#             */
/*   Updated: 2021/09/18 18:35:02 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*list;

	len = 0;
	list = lst;
	while (list != NULL)
	{
		list = list->next;
		len++;
	}
	return (len);
}
