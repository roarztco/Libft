
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	buffer1[10] = "abcdef";
	char	buffer2[10] = "hello";
	char	buffer3[10] = {0};
	char	buffer4[10] = "1234567";
	char	buffer5[5];
	char	buffer6[10] = "Hello";
	char str[3] = {'A', 'B', 'C'};
	char	*dup;
	int		*arr;

	// /* 1. ft_isalpha: Checks if a character is a letter (A-Z, a-z) */
	// printf("ft_isalpha: %d\n", ft_isalpha('A')); // 1
	// printf("ft_isalpha: %d\n", ft_isalpha('5')); // 0

	// /* 2. ft_isdigit: Checks if a character is a digit (0-9) */
	// printf("ft_isdigit: %d\n", ft_isdigit('7')); // 1
	// printf("ft_isdigit: %d\n", ft_isdigit('a')); // 0

	// /* 3. ft_isalnum: Checks if a character is a letter or digit */
	// printf("ft_isalnum: %d\n", ft_isalnum('9')); // 1
	// printf("ft_isalnum: %d\n", ft_isalnum('@')); // 0

	// /* 4. ft_isascii: Checks if a value is in the ASCII range (0-127) */
	// printf("ft_isascii: %d\n", ft_isascii(127)); // 1
	// printf("ft_isascii: %d\n", ft_isascii(200)); // 0

	// /* 5. ft_isprint: Checks if a character is printable */
	// printf("ft_isprint: %d\n", ft_isprint(' ')); // 1
	// printf("ft_isprint: %d\n", ft_isprint('\n')); // 0

	// /* 6. ft_strlen: Returns the length of a string */
	// printf("ft_strlen: %zu\n", ft_strlen("é")); // 5
	// printf("ft_strlen: %zu\n", ft_strlen("")); // 0

	// /* 7. ft_memset: Replaces the first 3 bytes with 'X' */
	// ft_memset(buffer1, 'X', 3);
	// printf("ft_memset: %s\n", buffer1); // XXXdef

	// /* 8. ft_bzero: Sets 3 bytes to zero starting from index 2 */
	// ft_bzero(buffer2 + 2, 3);
	// printf("ft_bzero: %s\n", buffer2); // he

	// /* 9. ft_memcpy: Copies 6 bytes, including the null terminator */
	// ft_memcpy(buffer3, "Hello", 6);
	// printf("ft_memcpy: %s\n", buffer3); // Hello

	// /* 10. ft_memmove: Copies 5 bytes with overlapping memory */
	// ft_memmove(buffer4 + 2, buffer4, 5);
	// printf("ft_memmove: %s\n", buffer4); // 1212345

	// /* 11. ft_strlcpy: Copies a string without overflowing */
	// printf("ft_strlcpy return: %zu\n",
	// 	ft_strlcpy(buffer5, "Hello", sizeof(buffer5))); // 5
	// printf("ft_strlcpy string: %s\n", buffer5); // Hell

	// /* 12. ft_strlcat: Appends a string within the buffer capacity */
	// printf("ft_strlcat return: %zu\n",
	// 	ft_strlcat(buffer6, "World", sizeof(buffer6))); // 10
	// printf("ft_strlcat string: %s\n", buffer6); // HelloWorl

	// /* 13. ft_toupper: Converts lowercase to uppercase */
	// printf("ft_toupper: %c\n", ft_toupper('b')); // B

	// /* 14. ft_tolower: Converts uppercase to lowercase */
	// printf("ft_tolower: %c\n", ft_tolower('F')); // f

	// /* 15. ft_strchr: Finds the first occurrence of a character */
	// printf("ft_strchr: %s\n", ft_strchr("banana", 'n')); // nana

	// /* 16. ft_strrchr: Finds the last occurrence of a character */
	// printf("ft_strrchr: %s\n", ft_strrchr("banana", 'a')); // a

	// /* 17. ft_strncmp: Compares up to n characters of two strings */
	// printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3)); // -1
	// printf("ft_strncmp: %d\n", ft_strncmp("abc", "abc", 3)); // 0

	// /* 18. ft_memchr: Finds a byte within the first n bytes */
	// printf("ft_memchr: %s\n",
	// 	(char *)ft_memchr("ABCDEF", 'D', 6)); // DEF

	// /* 19. ft_memcmp: Compares the first n bytes of two blocks */
	// printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3)); // -1
	// printf("ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3)); // 0

	// /* 20. ft_strnstr: Finds a substring within the first n bytes */
	// printf("ft_strnstr: %s\n",
	// 	ft_strnstr("Hello World", "World", 11)); // World

	// /* 21. ft_atoi: Converts a string into an integer */
	// printf("ft_atoi: %d\n", ft_atoi("42")); // 42
	// printf("ft_atoi: %d\n", ft_atoi("  -42abc")); // -42
	// printf("ft_atoi: %d\n", ft_atoi("--42")); // 0
	// printf("ft_atoi: %d\n", ft_atoi("-2147483648")); // INT_MIN

	// /* 22. ft_calloc: Allocates and initializes memory to zero */
	// arr = ft_calloc(3, sizeof(int));
	// if (arr != NULL)
	// {
	// 	printf("ft_calloc: %d %d %d\n",
	// 		arr[0], arr[1], arr[2]); // 0 0 0
	// 	free(arr);
	// }

	// /* 23. ft_strdup: Allocates a new copy of a string */
	// dup = ft_strdup("Libft");
	// if (dup != NULL)
	// {
	// 	printf("ft_strdup: %s\n", dup); // Libft
	// 	free(dup);
	// }

	// return (0);
}
