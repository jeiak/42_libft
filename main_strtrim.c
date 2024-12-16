/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:29:13 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/04 10:29:37 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*result;

	// Caso 1: Recortar espacios en blanco al principio y al final
	result = ft_strtrim("  Hello World  ", " ");
	printf("Caso 1: '%s'\n", result);
	free(result);

	// Caso 2: Recortar caracteres específicos ('x') al principio y al final
	result = ft_strtrim("xx42xx", "x");
	printf("Caso 2: '%s'\n", result);
	free(result);

	// Caso 3: Todos los caracteres son recortados
	result = ft_strtrim("aaaaaaa", "a");
	printf("Caso 3: '%s'\n", result);
	free(result);

	// Caso 4: Cadena vacía como entrada
	result = ft_strtrim("", "a");
	printf("Caso 4: '%s'\n", result);
	free(result);

	// Caso 5: No hay caracteres en el set para recortar
	result = ft_strtrim("Hello", "");
	printf("Caso 5: '%s'\n", result);
	free(result);

	// Caso 6: Set contiene caracteres no presentes en la cadena
	result = ft_strtrim("Hello", "xyz");
	printf("Caso 6: '%s'\n", result);
	free(result);

	// Caso 7: Cadena NULL
	result = ft_strtrim(NULL, "a");
	printf("Caso 7: '%s'\n", result); // Esto debería imprimir "(null)" o no imprimir nada
	free(result);

	// Caso 8: Set NULL
	result = ft_strtrim("Hello", NULL);
	printf("Caso 8: '%s'\n", result); // Esto debería imprimir "(null)" o no imprimir nada
	free(result);

	return (0);
}
