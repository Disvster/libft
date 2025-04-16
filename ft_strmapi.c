/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmaria <manmaria@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:48:47 by manmaria          #+#    #+#             */
/*   Updated: 2025/04/15 19:57:48 by manmaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 NOTE:
 Applies the function f to each character of the
 string s, passing its index as the first argument
 and the character itself as the second. A new
 string is created (using malloc(3)) to store the
 results from the successive applications of f.
  
  RETURN is the string created from the successive applications
   of ’f’.*/
//                              The function to apply to each character.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	i = ft_strlen(s);
	while (s[i])
	{
		f((size_t)i, s[i]);
		i++;
	}
	mapi = ft_strdup(s);
	return (mapi);
}
