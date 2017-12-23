/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 11:23:14 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/22 16:28:45 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*create member - this works*/
/*
static t_member	*ft_create_member(const char *name, const char *type)
{
	t_member *new_member;

	new_member = (t_member*)malloc(sizeof(new_member));
	if (!new_member)
	{
		return (NULL);
	}
	if (ft_strlen(name) < 100 && ft_strlen(type) < 22)
	{
		ft_memmove(new_member->member_name, name, ft_strlen(name) + 1);
		ft_memmove(new_member->member_type, type, ft_strlen(type) + 1);
		new_member->next_member = NULL;
		return (new_member);
	}
	return (NULL);
}
*/
/*create name - this works*/
static t_name	*ft_name_struct(const char *name, const char *alias)
{
	t_name *new_struct;

	new_struct = (t_name*)malloc(sizeof(new_struct));
	if (!new_struct)
	{
		return (NULL);
	}
	if(ft_strlen(name) < 100 && ft_strlen(alias) < 100)
	{
		ft_memmove(new_struct->struct_name, name, ft_strlen(name) + 1);
		ft_memmove(new_struct->struct_alias, alias, ft_strlen(alias) + 1);
		new_struct->first_member = NULL;
		return (new_struct);
	}
	return (NULL);
}

void			ft_push_member(**t_member HEAD, t_member new_member)
{

}
/*create struct*/
t_struct	*ft_create_struct(t_struct new_struct_name, **t_member new_struct_members)
{
	
}

/*save struct*/

int main(void)
{
	const char	*name = "Poitier";
	const char	*type = "p_struct";
	t_name	*poitier;
	
	poitier = ft_name_struct(name, type);
	printf("name:\t%s\ntype:\t%s\n\n", poitier->struct_name, poitier->struct_alias);
	return (0);
}
