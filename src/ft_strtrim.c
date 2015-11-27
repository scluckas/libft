/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:31:35 by lscariot          #+#    #+#             */
/*   Updated: 2015/11/26 11:03:18 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		s++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	str = malloc(sizeof(char) * (j - i));
	while (j >= i && s[i] != '\0')
		*str++ = s[i++];
	return (str);
}