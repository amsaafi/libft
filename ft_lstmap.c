/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:22:35 by samsaafi          #+#    #+#             */
/*   Updated: 2023/11/15 12:22:39 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	t_list	*cur;

	if (!lst || !f)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	cur = newlst;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		cur->next = tmp;
		cur = tmp;
		lst = lst->next;
	}
	return (newlst);
}

// void *ft_f(void *str)
// {
//     int i;
//     unsigned char *s = str;

//     i = 0;
//     while (s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//         i++;
//     }
//     char *new_str = ft_strdup((const char*)s);
//     if (new_str == NULL)
//     {
// 		return NULL;
//     }

//     return new_str;
// }


// void ft_del(void *ptr)
// {
// 	free(ptr);
// }

// int main()
// {
// 	t_list *new;
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(strdup("first"));
// 	ft_lstadd_back(&head, node1);
// 	t_list *node2 = ft_lstnew(strdup("second"));
// 	ft_lstadd_back(&head, node2);
// 	t_list *node3 = ft_lstnew(strdup("third"));
// 	ft_lstadd_back(&head, node3);

// 	t_list *ptr = head;
// 	while (ptr != NULL)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}

// 	new = ft_lstmap(head, ft_f, ft_del);
// 	printf("\nAFTER lstmap:\n");

// 	ptr = new;
// 	while (ptr != NULL)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}

// 	return 0;
// }