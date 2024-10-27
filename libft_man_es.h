/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:51:05 by bvera             #+#    #+#             */
/*   Updated: 2024/09/21 22:06:49 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MAN_ES_H
# define LIBFT_MAN_ES_H
# include <unistd.h>
# include <stdlib.h>

/**
 * ft_character
 * 
 * Comprueba si el carácter dado es una letra.
 * 
 * @param chr El carácter a comprobar.
 * @return 1 si es una letra, 0 en caso contrario.
 */
int			ft_isalpha(int chr);

/**
 * ft_character
 * 
 * Comprueba si el carácter dado es un dígito.
 * 
 * @param dig El carácter a comprobar.
 * @return 1 si es un dígito, 0 en caso contrario.
 */
int			ft_isdigit(int dig);

/**
 * ft_character
 * 
 * Comprueba si el carácter dado es alfanumérico.
 * 
 * @param alnum El carácter a comprobar.
 * @return 1 si es alfanumérico, 0 en caso contrario.
 */
int			ft_isalnum(int alnum);

/**
 * ft_character
 * 
 * Comprueba si el carácter dado es un carácter ASCII.
 * 
 * @param ascii El carácter a comprobar.
 * @return 1 si es ASCII, 0 en caso contrario.
 */
int			ft_isascii(int ascii);

/**
 * ft_character
 * 
 * Comprueba si el carácter dado es imprimible.
 * 
 * @param print El carácter a comprobar.
 * @return 1 si es imprimible, 0 en caso contrario.
 */
int			ft_isprint(int print);

/**
 * ft_string
 * 
 * Calcula la longitud de la cadena.
 * 
 * @param str La cadena a medir.
 * @return La longitud de la cadena.
 */
size_t		ft_strlen(const char *str);

/**
 * ft_string
 * 
 * Encuentra la primera aparición de un carácter en una cadena.
 * 
 * @param str La cadena a buscar.
 * @param chr El carácter a encontrar.
 * @return Un puntero al primer carácter encontrado, o NULL si no se encuentra.
 */
char		*ft_strchr(const char *str, int chr);

/**
 * ft_string
 * 
 * Encuentra la última aparición de un carácter en una cadena.
 * 
 * @param str La cadena a buscar.
 * @param chr El carácter a encontrar.
 * @return Un puntero al último carácter encontrado, o NULL si no se encuentra.
 */
char		*ft_strrchr(const char *str, int chr);

/**
 * ft_string
 * 
 * Compara dos cadenas hasta un número dado de caracteres.
 * 
 * @param str1 La primera cadena.
 * @param str2 La segunda cadena.
 * @param num El número de caracteres a comparar.
 * @return 0 si son iguales, un valor negativo si str1 es menor, 
 * un valor positivo si str1 es mayor.
 */
int			ft_strncmp(const char *str1, const char *str2, size_t num);

/**
 * ft_string
 * 
 * Busca una subcadena dentro de otra cadena, con un límite de longitud.
 * 
 * @param haystack La cadena donde buscar.
 * @param needle La subcadena a buscar.
 * @param len La longitud máxima a buscar.
 * @return Un puntero a la primera aparición de needle en haystack,
 * o NULL si no se encuentra.
 */
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * ft_memory
 * Establece un valor específico en un bloque de memoria.
 * 
 * @param mem_area El área de memoria a modificar.
 * @param value El valor a establecer.
 * @param num_bytes El número de bytes a establecer.
 * @return Un puntero al área de memoria modificada.
 */
void		*ft_memset(void *mem_area, int value, size_t num_bytes);

/**
 * ft_memory
 * 
 * Establece todos los bytes en un bloque de memoria a cero.
 * 
 * @param mem_area El área de memoria a modificar.
 * @param num_bytes El número de bytes a establecer a cero.
 */
void		ft_bzero(void *mem_area, size_t num_bytes);

/**
 * ft_memory
 * 
 * Copia un bloque de memoria de una ubicación a otra.
 * 
 * @param dest_area El área de destino.
 * @param src_area El área de origen.
 * @param num_bytes El número de bytes a copiar.
 * @return Un puntero al área de destino.
 */
void		*ft_memcpy(void *dest_area, const void *src_area, size_t num_bytes);

/**
 * ft_memory
 * 
 * Mueve un bloque de memoria de una ubicación a otra, manejando superposiciones.
 * 
 * @param dest_area El área de destino.
 * @param src_area área de origen.
 * @param num_bytes El número de bytes a mover.
 * @return Un puntero al área de destino.
 */
void		*ft_memmove(void *dest, const void *src, size_t num_bytes);

/**
 * ft_memory
 * 
 * Busca un carácter en un bloque de memoria.
 * 
 * @param mem_area El área de memoria a buscar.
 * @param chr El carácter a buscar.
 * @param num_bytes El número de bytes a examinar.
 * @return Un puntero al carácter encontrado, o NULL si no se encuentra.
 */
void		*ft_memchr(const void *mem_area, int chr, size_t num_bytes);

/**
 * ft_memory_managment
 * 
 * Compara dos bloques de memoria.
 * 
 * @param ptr1 Puntero al primer bloque de memoria.
 * @param ptr2 Puntero al segundo bloque de memoria.
 * @param num_bytes Número de bytes a comparar.
 * @return Un valor menor que, igual a, o mayor que cero, si el primer bloque
 *         de memoria es menor, igual, o mayor que el segundo bloque de memoria.
 */
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num_bytes);

/**
 * ft_string_manipulation
 * 
 * Copia hasta max_size - 1 caracteres de la cadena src a dest, 
 * añadiendo un terminador nulo al final.
 *
 * @param dest_area El área de destino donde se copia la cadena.
 * @param src_area La cadena fuente que se va a copiar.
 * @param max_size El tamaño máximo a copiar.
 * @return La longitud de la cadena fuente.
 */
size_t		ft_strlcpy(char *dest_area, const char *src_area, size_t max_size);

/**
 * ft_string_manipulation
 * 
 * Concatena la cadena src a dest, asegurando que dest tiene un 
 * tamaño máximo de max_size.
 *
 * @param dest_area El área de destino donde se concatena la cadena.
 * @param src_area La cadena fuente que se va a concatenar.
 * @param max_size El tamaño máximo permitido en el área de destino.
 * @return La longitud total de la cadena que se intentó crear.
 */
size_t		ft_strlcat(char *dest_area, const char *src_area, size_t max_size);

/**
 * ft_conversion
 * 
 * Convierte un carácter a su versión en mayúscula.
 *
 * @param chr El carácter a convertir.
 * @return El carácter en mayúscula, o el mismo carácter si no es una letra.
 */
int			ft_toupper(int chr);

/**
 * ft_conversion
 * 
 * Convierte un carácter a su versión en minúscula.
 *
 * @param chr El carácter a convertir.
 * @return El carácter en minúscula, o el mismo carácter si no es una letra.
 */
int			ft_tolower(int chr);

/**
 * ft_conversion
 * 
 * Convierte una cadena numérica a un entero.
 *
 * @param str_num La cadena que representa un número.
 * @return El valor entero representado por la cadena.
 */
int			ft_atoi(const char *str_num);

/**
 * ft_conversion
 * 
 * Duplica la cadena dada, asignando memoria nueva.
 *
 * @param str La cadena que se va a duplicar.
 * @return Una nueva cadena que es una copia de str.
 */
char		*ft_strdup(const char *str);

/**
 * ft_memory_managment
 * 
 * Asigna memoria para un arreglo de elementos y los inicializa a cero.
 * 
 * @param num_elements La cantidad de elementos.
 * @param element_size El tamaño de cada elemento.
 * @return Un puntero al bloque de memoria asignado, o NULL si falla.
 */
void		*ft_calloc(size_t num_elements, size_t element_size);

/**
 * ft_string_creation
 * 
 * ft_substr - Crea una subcadena de una cadena dada.
 * 
 * @s: La string desde la que crear la substring.
 * @start: El índice del caracter en 's' desde el que empezar la substring.
 * @len: La longitud máxima de la substring.
 * 
 * Valor devuelto:
 * La substring resultante o NULL si falla la reserva de memoria.
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * ft_string_creation
 * 
 * ft_strjoin - Concatena dos cadenas.
 * 
 * @s1: La primera string.
 * @s2: La string a añadir a 's1'.
 * 
 * Valor devuelto:
 * La nueva string formada por la concatenación de 's1' y 's2',
 * o NULL si falla la reserva de memoria.
 */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * ft_string_creation
 * 
 * ft_strtrim - Elimina caracteres de la cadena según el conjunto dado.
 * 
 * @s1: La string que debe ser recortada.
 * @set: Los caracteres a eliminar de la string.
 * 
 * Valor devuelto:
 * La string recortada o NULL si falla la reserva de memoria.
 */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * ft_string_creation
 * 
 * ft_itoa - Convierte un número entero a su representación en cadena.
 * @n: El número entero a convertir.
 *
 * Valor devuelto:
 * Una cadena que representa el número o NULL si falla.
 */
char		*ft_itoa(int n);

/**
 * ft_string_creation_split
 * 
 * ft_split - Divide una cadena en subcadenas usando un delimitador.
 * 
 * @s: La cadena de entrada que se va a dividir.
 * @c: El carácter delimitador que separa las subcadenas.
 * 
 * Valor devuelto:
 * Un array de cadenas (char **) que contiene las subcadenas resultantes.
 * Cada elemento del array es una subcadena separada por el delimitador 'c'.
 * El último elemento del array es NULL para indicar el final del array.
 * Devuelve NULL si falla la reserva de memoria o si la cadena de 
 * entrada es NULL.
 */

char		**ft_split(const char *s, char c);

/**
 * ft_string_transformation
 * 
 * Aplica una función a cada carácter de la cadena, creando una nueva cadena
 * resultante de la aplicación de la función.
 *
 * @param str La cadena a la que se aplicará la función.
 * @param f La función que se aplicará a cada carácter.
 * @return Una nueva cadena con el resultado de la aplicación de la función.
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * ft_string_transformation
 * 
 * Aplica una función a cada carácter de la cadena, modificando los caracteres
 * en su lugar (in situ).
 *
 * @param s La cadena a modificar.
 * @param fn La función que se aplicará a cada carácter.
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * ft_io_functions
 * 
 * Escribe un carácter en el descriptor de archivo dado.
 *
 * @param c El carácter a escribir.
 * @param fd El descriptor de archivo.
 */
void		ft_putchar_fd(char c, int fd);

/**
 * ft_io_functions
 * 
 * Escribe una cadena en el descriptor de archivo dado.
 *
 * @param s La cadena a escribir.
 * @param fd El descriptor de archivo.
 */
void		ft_putstr_fd(char *s, int fd);

/**
 * ft_io_functions
 * 
 * Escribe una cadena seguida de un salto de línea en el
 * descriptor de archivo dado.
 *
 * @param s La cadena a escribir.
 * @param fd El descriptor de archivo.
 */
void		ft_putendl_fd(char *s, int fd);

/**
 * ft_io_functions
 * 
 * Escribe un número en el descriptor de archivo dado.
 *
 * @param num El número a escribir.
 * @param fd El descriptor de archivo.
 */
void		ft_putnbr_fd(int n, int fd);

#endif