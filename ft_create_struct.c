/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 11:23:14 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/22 13:03:00 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*create member*/
t_member	*ft_create_member(const char *name, const char *type)
{
	t_member *new_member;

	new_member = (t_member*)malloc(sizeof(new_member));
	if (!new_member)
	{
		return (NULL);
	}
	if (ft_strlen(name) < 100 && ft_strlen(type) < 22)
	{
		ft_memmove(new_member->member_name, name, ft_strlen(name) + 1 );
		ft_memmove(new_member->member_type, type, ft_strlen(type) + 1);
		new_member->next_member = NULL;
		return (new_member);
	}
	return (NULL);
}
/*create name*/
/*create struct*/
/*
t_struct	*ft_create_struct(t_struct new_struct_name, **t_member new_struct_members)
{
	
}
*/
/*save struct*/

int main(void)
{
	const char	*name = "Poitier";
	const char	*type = "p_struct";
	t_member	*poitier;
	poitier = ft_create_member(name, type);

	printf("name:\t%s\ntype:\t%s\n\n", poitier->member_name, poitier->member_type);
	return (0);
}
