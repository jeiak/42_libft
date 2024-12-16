/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:49:48 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/04 10:49:53 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *result;

    // Caso 1: Subcadena normal
    result = ft_substr("Hello, World!", 7, 5);
    printf("Caso 1: %s\n", result); // Esperado: "World"
    free(result);

    // Caso 2: Inicio en 0
    result = ft_substr("Hello, World!", 0, 5);
    printf("Caso 2: %s\n", result); // Esperado: "Hello"
    free(result);

    // Caso 3: Inicio fuera de rango
    result = ft_substr("Hello", 10, 5);
    printf("Caso 3: %s\n", result); // Esperado: ""
    free(result);

    // Caso 4: Longitud mayor que la cadena restante
    result = ft_substr("Hello, World!", 7, 20);
    printf("Caso 4: %s\n", result); // Esperado: "World!"
    free(result);

    // Caso 5: Cadena vacía
    result = ft_substr("", 0, 5);
    printf("Caso 5: %s\n", result); // Esperado: ""
    free(result);

    // Caso 6: Longitud 0
    result = ft_substr("Hello, World!", 5, 0);
    printf("Caso 6: %s\n", result); // Esperado: ""
    free(result);

    // Caso 7: Inicio en el final de la cadena
    result = ft_substr("Hello, World!", 13, 5);
    printf("Caso 7: %s\n", result); // Esperado: ""
    free(result);

    // Caso 8: NULL como entrada
    result = ft_substr(NULL, 0, 5);
    printf("Caso 8: %s\n", result); // Esperado: "(null)"

    return 0;
}
