#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

// Función auxiliar para comparar enteros
void	test_int(const char *name, int libft_res, int orig_res)
{
	if (libft_res == orig_res)
		printf(GREEN "%s PASSED\n" RESET, name);
	else
		printf(RED "%s FAILED: Libft: %d, Original: %d\n" RESET, 
			name, libft_res, orig_res);
}

// Función auxiliar para comparar cadenas
void	test_str(const char *name, const char *libft_res, const char *orig_res)
{
	if ((libft_res == NULL && orig_res == NULL) ||
		(libft_res && orig_res && strcmp(libft_res, orig_res) == 0))
		printf(GREEN "%s PASSED\n" RESET, name);
	else
		printf(RED "%s FAILED: Libft: %s, Original: %s\n" RESET, 
			name, libft_res, orig_res);
}

// Función auxiliar para comparar bloques de memoria
void	test_mem(const char *name, const void *libft_res, const void *orig_res, 
	size_t size)
{
	if (memcmp(libft_res, orig_res, size) == 0)
		printf(GREEN "%s PASSED\n" RESET, name);
	else
		printf(RED "%s FAILED\n" RESET, name);
}

// Alternativa a strnstr si no está disponible
const char	*strnstr_alt(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!*needle)
		return (haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len-- >= needle_len)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, needle_len))
			return (haystack);
		haystack++;
	}
	return (NULL);
}

// Funciones callback para ft_strmapi y ft_striteri
char	ft_mapi_callback(unsigned int i, char c)
{
	return (c + i);
}

void	ft_iteri_callback(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	libft_mem[50];
	char	orig_mem[50];
	char	dest1[20];
	char	dest2[20];
	char	**result;

	// Pruebas para ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
	for (int i = -1; i <= 9; i++)
	{
		test_int("ft_isalpha", ft_isalpha(i), isalpha(i));
		test_int("ft_isdigit", ft_isdigit(i), isdigit(i));
		test_int("ft_isalnum", ft_isalnum(i), isalnum(i));
		test_int("ft_isascii", ft_isascii(i), isascii(i));
		test_int("ft_isprint", ft_isprint(i), isprint(i));
	}

	// Pruebas para ft_strlen
	test_int("ft_strlen", ft_strlen("Hello, World!"), strlen("Hello, World!"));

	// Pruebas para ft_strchr y ft_strrchr
	test_str("ft_strchr", ft_strchr("Hello, World!", 'o'), 
		strchr("Hello, World!", 'o'));
	test_str("ft_strrchr", ft_strrchr("Hello, World!", 'o'), 
		strrchr("Hello, World!", 'o'));

	// Pruebas para ft_strncmp
	test_int("ft_strncmp", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	test_int("ft_strncmp", ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));

	// Pruebas para ft_strnstr (usando alternativa)
	test_str("ft_strnstr", ft_strnstr("Hello, World!", "World", 12), 
		strnstr_alt("Hello, World!", "World", 12));

	// Pruebas para ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr
	test_mem("ft_memset", ft_memset(libft_mem, 'a', 5), 
		memset(orig_mem, 'a', 5), 5);
	ft_bzero(libft_mem, 5);
	bzero(orig_mem, 5);
	test_mem("ft_bzero", libft_mem, orig_mem, 5);
	test_mem("ft_memcpy", ft_memcpy(libft_mem, "hello", 5), 
		memcpy(orig_mem, "hello", 5), 5);
	test_mem("ft_memmove", ft_memmove(libft_mem + 1, libft_mem, 5), 
		memmove(orig_mem + 1, orig_mem, 5), 5);
	test_mem("ft_memchr", ft_memchr(libft_mem, 'a', 5), 
		memchr(orig_mem, 'a', 5), 5);

	// Pruebas para ft_strlcpy y ft_strlcat
	test_int("ft_strlcpy", ft_strlcpy(dest1, "Hello", 20), 
		strlcpy(dest2, "Hello", 20));
	test_int("ft_strlcat", ft_strlcat(dest1, " World", 20), 
		strlcat(dest2, " World", 20));

	// Pruebas para ft_strdup
	test_str("ft_strdup", ft_strdup("Hello"), strdup("Hello"));

	// Pruebas para ft_substr, ft_strjoin, ft_strtrim
	test_str("ft_substr", ft_substr("Hello, World!", 7, 5), "World");
	test_str("ft_strjoin", ft_strjoin("Hello", " World"), "Hello World");
	test_str("ft_strtrim", ft_strtrim("  Hello  ", " "), "Hello");

	// Pruebas para ft_itoa
	test_str("ft_itoa", ft_itoa(12345), "12345");

	// Pruebas para ft_split
	result = ft_split("Hello World 42", ' ');
	test_str("ft_split", result[0], "Hello");
	test_str("ft_split", result[1], "World");
	test_str("ft_split", result[2], "42");

	// Pruebas para ft_strmapi y ft_striteri
	char *mapped = ft_strmapi("abc", ft_mapi_callback);
	test_str("ft_strmapi", mapped, "ace");

	char iterated_str[] = "abc";
	ft_striteri(iterated_str, ft_iteri_callback);
	test_str("ft_striteri", iterated_str, "ace");

	// Liberación de memoria y finalización de prueba
	free(mapped);
	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);

	return (0);
}
