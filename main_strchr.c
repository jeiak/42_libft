/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:52:21 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/04 10:52:41 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str = "Hello, World!";
    char *result;

    // Caso 1: Buscar un carácter presente al inicio
    result = ft_strchr(str, 'H');
    printf("Caso 1: %s\n", result); // Esperado: "Hello, World!"

    // Caso 2: Buscar un carácter presente en el medio
    result = ft_strchr(str, 'W');
    printf("Caso 2: %s\n", result); // Esperado: "World!"

    // Caso 3: Buscar un carácter presente al final
    result = ft_strchr(str, '!');
    printf("Caso 3: %s\n", result); // Esperado: "!"

    // Caso 4: Buscar el terminador nulo '\0'
    result = ft_strchr(str, '\0');
    printf("Caso 4: %s\n", result); // Esperado: ""

    // Caso 5: Buscar un carácter no presente
    result = ft_strchr(str, 'z');
    printf("Caso 5: %s\n", result); // Esperado: "(null)"

    // Caso 6: Cadena vacía, buscar cualquier carácter
    result = ft_strchr("", 'a');
    printf("Caso 6: %s\n", result); // Esperado: "(null)"

    // Caso 7: Buscar un carácter duplicado
    result = ft_strchr("abcabc", 'b');
    printf("Caso 7: %s\n", result); // Esperado: "bcabc"

    // Caso 8: Cadena nula (undefined behavior, no debería usarse)
    // result = ft_strchr(NULL, 'a');
    // printf("Caso 8: %s\n", result); // No ejecutar este caso.

    return 0;
}
