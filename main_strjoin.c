#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *result;

    result = ft_strjoin("Hello", " World");
    printf("Caso 1: '%s'\n", result);  // Esperado: "Hello World"
    free(result);

    result = ft_strjoin("42", " is the answer");
    printf("Caso 2: '%s'\n", result);  // Esperado: "42 is the answer"
    free(result);

    result = ft_strjoin("", "Empty string");
    printf("Caso 3: '%s'\n", result);  // Esperado: "Empty string"
    free(result);

    result = ft_strjoin("No", "");
    printf("Caso 4: '%s'\n", result);  // Esperado: "No"
    free(result);

    result = ft_strjoin("", "");
    printf("Caso 5: '%s'\n", result);  // Esperado: ""
    free(result);

    return 0;
}
