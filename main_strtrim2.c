/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:29:13 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/04 11:57:51 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *result;

    result = ft_strtrim("  Hello World  ", " ");
    printf("Caso 1: '%s'\n", result); // Esperado: "Hello World"
    free(result);

    result = ft_strtrim("xx42xx", "x");
    printf("Caso 2: '%s'\n", result); // Esperado: "42"
    free(result);

    result = ft_strtrim("abcdef", "ace");
    printf("Caso 3: '%s'\n", result); // Esperado: "bdef"
    free(result);

    result = ft_strtrim("42", "");
    printf("Caso 4: '%s'\n", result); // Esperado: "42"
    free(result);

    result = ft_strtrim("", "abc");
    printf("Caso 5: '%s'\n", result); // Esperado: ""
    free(result);

    result = ft_strtrim("", "");
    printf("Caso 6: '%s'\n", result); // Esperado: ""
    free(result);

    return 0;
}
