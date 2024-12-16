/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:33:58 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/03 11:20:37 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

// Función auxiliar para ft_striteri
void	iteri_test(unsigned int i, char *c)
{
	*c += i; // Modifica el carácter según su índice
}

char mapi_test(unsigned int i, char c)
{
    return (c + i); // Devuelve un carácter modificado.
}

// Función auxiliar para ft_lstmap
void	*map_test(void *content)
{
	return (ft_strdup((char *)content));
}

// Función auxiliar para ft_lstclear y ft_lstdelone
void	del_test(void *content)
{
	free(content);
}

// Función auxiliar para ft_lstiter
void	iter_test(void *content)
{
	printf("Node content: %s\n", (char *)content);
}

int	main(void)
{
	// Pruebas para funciones de verificación
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('9'): %d\n", ft_isdigit('9'));
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(32): %d\n", ft_isprint(32));

	// Pruebas para funciones de memoria
	char buffer[10] = "123456789";
	ft_bzero(buffer, 5);
	printf("ft_bzero: %s\n", buffer + 5);

	char *mem = ft_calloc(5, sizeof(char));
	printf("ft_calloc: %s\n", mem);
	free(mem);

	// Pruebas para funciones de cadenas
	printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));

	char src[10] = "World";
	char dest[15] = "Hello ";
	printf("ft_strlcat: %zu, Result: %s\n", ft_strlcat(dest, src, 15), dest);

	char dest2[10];
	ft_strlcpy(dest2, "Hello", 10);
	printf("ft_strlcpy: %s\n", dest2);

	char *dup = ft_strdup("Hello");
	printf("ft_strdup: %s\n", dup);
	free(dup);

	char *join = ft_strjoin("Hello, ", "World!");
	printf("ft_strjoin: %s\n", join);
	free(join);

	char *sub = ft_substr("Hello, World!", 7, 5);
	printf("ft_substr: %s\n", sub);
	free(sub);

	char *trim = ft_strtrim("   Hello, World!   ", " ");
	printf("ft_strtrim: %s\n", trim);
	free(trim);

	char **split = ft_split("Hello,42,World", ',');
	for (int i = 0; split[i]; i++)
	{
		printf("ft_split[%d]: %s\n", i, split[i]);
		free(split[i]);
	}
	free(split);

	// Pruebas para funciones de conversión
	printf("ft_atoi(\"123\"): %d\n", ft_atoi("123"));
	char *itoa = ft_itoa(-12345);
	printf("ft_itoa(-12345): %s\n", itoa);
	free(itoa);

	// Pruebas para funciones de manipulación
	char str[] = "abcd";
	ft_striteri(str, iteri_test);
	printf("ft_striteri: %s\n", str);

	char *mapi_res = ft_strmapi("abcd", mapi_test);
	printf("ft_strmapi: %s\n", mapi_res);
	free(mapi_res);

	// Pruebas para funciones de listas
	t_list *lst = ft_lstnew(ft_strdup("Node 1"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Node 0")));

	printf("ft_lstsize: %d\n", ft_lstsize(lst));
	print_list(lst);

	//ft_lstdelone(lst->next, del_test);
	//print_list(lst);

	ft_lstclear(&lst, del_test);
	print_list(lst);

	// Pruebas para ft_lstmap
	lst = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("3")));
	t_list *mapped_lst = ft_lstmap(lst, map_test, del_test);
	print_list(mapped_lst);

	// Limpieza
	ft_lstclear(&lst, del_test);
	ft_lstclear(&mapped_lst, del_test);

	return (0);
}
