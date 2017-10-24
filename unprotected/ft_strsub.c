/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:02:54 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:32:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*original_substr;

	substr = (char *)malloc(sizeof(*substr) * (len + 1));
	original_substr = substr;
	if (substr != NULL)
	{
		while (len > 0)
		{
			*substr = *(s + start);
			++substr;
			++s;
			--len;
		}
		*substr = '\0';
	}
	return (original_substr);
}
